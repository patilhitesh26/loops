#include <iostream>

int main() {
    int number;

    std::cout << "Enter numbers : ";
    std::cin >> number;

    while (number >= 0) {
        std::cout << "You entered: " << number << std::endl;

        std::cout << "Enter the next number : ";
        std::cin >> number;
    }

    std::cout << "Exited the loop. Program finished" << std::endl;

    return 0;
}
