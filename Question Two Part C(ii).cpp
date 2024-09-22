#include <iostream>

int main() {
    const int LENGTH = 21;
    char message[LENGTH];
    int i;
    
    std::cout << "Enter a sentence on the line below." << std::endl;
    std::cin.get(message[0]);
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
    std::cout << "This is because cin.get() reads every character, including whitespace." << std::endl;
    std::cout << "It will read and store 'Please go away.' in the message array." << std::endl;
    std::cout << "The program stops reading at the newline character or when LENGTH-1 is reached." << std::endl;

    return 0;
}
