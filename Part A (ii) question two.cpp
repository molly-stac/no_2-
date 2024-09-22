#include <iostream>

void singleDimensionalArray() {
    int numbers[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
}
void multiDimensionalArray() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
int main() {
    std::cout << "\nSingle-dimensional array example:" << std::endl;
    singleDimensionalArray();
    // print the multi-dimensional
    std::cout << "\nMulti-dimensional array example:" << std::endl;
    multiDimensionalArray();
    return 0;
}
