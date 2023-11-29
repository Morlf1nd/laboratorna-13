#include <iostream>
#include <limits>

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

int main() {
    setlocale(0, ".1251");
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    std::cout << "Введіть кількість рядків: ";
    std::cin >> rows;
    std::cout << "Введіть кількість стовпців: ";
    std::cin >> cols;

    std::cout << "Введіть елементи матриці:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Елемент [" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < rows; ++i) {
        int minElement = std::numeric_limits<int>::max();
        int minIndex = -1;

        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
                minIndex = j;
            }
        }

        std::cout << "Мінімальний елемент у рядку " << i + 1 << " має значення " << minElement << " та знаходиться в стовпці " << minIndex + 1 << ".\n";
    }

    return 0;