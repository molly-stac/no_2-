#include <iostream>

int main() {
    const int LENGTH = 21;
    char message[LENGTH];
    int i;
    
    std::cout << "Enter a sentence on the line below." << std::endl;
    std::cin >> message[0];
    i = 0;
    while (i < LENGTH - 1 && message[i] != '\n')
    {
        ++i;
        std::cin.get(message[i]);
    }
    message[i] = '\0';
    std::cout << message << std::endl;

    std::cout << "\nExplanation:" << std::endl;
    std::cout << "The output will be: Please" << std::endl;
    std::cout << "This is because cin >> only reads up to the first whitespace character." << std::endl;
    std::cout << "So, it will only read and store 'Please' in the message array." << std::endl;

    return 0;
}
