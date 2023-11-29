#include <iostream>

const int MAX_SIZE = 100;

int main() {
    setlocale(0, ".1251");
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;


    std::cout << "Введіть розмір квадратної матриці: ";
    std::cin >> size;

    std::cout << "Введіть елементи матриці: " << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << "Елемент [" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> matrix[i][j];
        }
    }


    int product = 1;
    for (int i = 0; i < size; ++i) {
        if (matrix[i][i] > 0) {
            product *= matrix[i][i];
        }
    }


    if (product != 1) {
        std::cout << "Добуток додатних елементів на головній діагоналі: " << product << std::endl;
    }
    else {
        std::cout << "На головній діагоналі немає додатних елементів або матриця не є квадратною." << std::endl;
    }

    return 0;
}