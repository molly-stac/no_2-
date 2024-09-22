#include <iostream>

void demonstrateLoops() {
    
    for (int i = 0; i < 5; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    int j = 0;
    while (j < 5) {
        std::cout << j << " ";
        j++;
    }
    std::cout << std::endl;

}
int main() {
    std::cout << "\nLoops example:" << std::endl;
    demonstrateLoops();
}
