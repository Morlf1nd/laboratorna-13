#include <iostream>
#include <cstdlib>
#include <ctime>

const int MAX_ROWS = 5;
const int MAX_COLS = 3;


void initializeArray(int arr[MAX_ROWS][MAX_COLS]) {
    srand(time(0));

    for (int i = 0; i < MAX_ROWS; ++i) {
        for (int j = 0; j < MAX_COLS; ++j) {
            arr[i][j] = rand() % 2;
        }
    }
}


void printArray(const int arr[MAX_ROWS][MAX_COLS]) {
    for (int i = 0; i < MAX_ROWS; ++i) {
        for (int j = 0; j < MAX_COLS; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int countAdjacentOnes(const int arr[MAX_ROWS][MAX_COLS], int row, int col) {
    int count = 0;

    for (int i = row - 1; i <= row + 1; ++i) {
        for (int j = col - 1; j <= col + 1; ++j) {
            if (i >= 0 && i < MAX_ROWS && j >= 0 && j < MAX_COLS && !(i == row && j == col) && arr[i][j] == 1) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    setlocale(0, ".1251");
    int array[MAX_ROWS][MAX_COLS];


    initializeArray(array);
    std::cout << "Двовимірний масив:\n";
    printArray(array);

    int countOnes = countAdjacentOnes(array, 2, 2);
    std::cout << "Кількість сусідніх елементів, рівних 1, у елементі (2,2): " << countOnes << std::endl;

    return 0;
}