#include <iostream>

int findThirdAngle(int angle1, int angle2) {
    const int TRIANGLE_SUM = 180;
    return TRIANGLE_SUM - (angle1 + angle2);
}

int main() {
    int angle1, angle2;
    
    std::cout << "Enter the first angle: ";
    std::cin >> angle1;
    
    std::cout << "Enter the second angle: ";
    std::cin >> angle2;
    
    int thirdAngle = findThirdAngle(angle1, angle2);
    
    std::cout << "The third angle is: " << thirdAngle << " degrees" << std::endl;
    
    return 0;
}

