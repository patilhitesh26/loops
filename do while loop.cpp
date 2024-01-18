#include <iostream>

int main() {
    int number;

    do {
        std::cout << "Enter a number (enter 0 to exit): ";
        std::cin >> number;

        std::cout << "You entered: " << number << std::endl;

    } while (number != 0); 

    std::cout << "Exiting the program" << std::endl;

    return 0;
}
