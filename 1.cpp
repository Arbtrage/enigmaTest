#include <iostream>

int main() {
    int rows;

    std::cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // Print spaces before the stars
        for (int j = 1; j <= rows - i; j++) {
            std::cout << " ";
        }

        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}