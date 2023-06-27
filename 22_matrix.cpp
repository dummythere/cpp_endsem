#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> matrix;
    int rows;
    int columns;

public:
    Matrix(int numRows, int numColumns)
        : rows(numRows), columns(numColumns) {
        matrix.resize(rows, std::vector<int>(columns));
    }

    int getRows() const {
        return rows;
    }

    int getColumns() const {
        return columns;
    }

    int& operator()(int rowIndex, int columnIndex) {
        return matrix[rowIndex][columnIndex];
    }

    const int& operator()(int rowIndex, int columnIndex) const {
        return matrix[rowIndex][columnIndex];
    }

    Matrix operator*(const Matrix& other) const {
        int resultRows = rows;
        int resultColumns = other.columns;
        Matrix result(resultRows, resultColumns);

        for (int i = 0; i < resultRows; i++) {
            for (int j = 0; j < resultColumns; j++) {
                int sum = 0;
                for (int k = 0; k < columns; k++) {
                    sum += matrix[i][k] * other(k, j);
                }
                result(i, j) = sum;
            }
        }

        return result;
    }

    void display() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Matrix matrix1(2, 3);
    matrix1(0, 0) = 1;
    matrix1(0, 1) = 2;
    matrix1(0, 2) = 3;
    matrix1(1, 0) = 4;
    matrix1(1, 1) = 5;
    matrix1(1, 2) = 6;

    Matrix matrix2(3, 2);
    matrix2(0, 0) = 7;
    matrix2(0, 1) = 8;
    matrix2(1, 0) = 9;
    matrix2(1, 1) = 10;
    matrix2(2, 0) = 11;
    matrix2(2, 1) = 12;

    Matrix result = matrix1 * matrix2;
    result.display();

    return 0;
}
