#include <iostream>

int main() {
    int number = 3;  // Example number in one's complement

    if (number >= 0) {
        // Positive number, simply add 1
        number += 1;
    } else {
        // Negative number, apply one's complement, add 1, then revert back to one's complement
        number = ~number;  // One's complement
        number += 1;      // Add 1
        number = ~number;  // Revert back to one's complement
    }

    std :: cout<<sizeof(number)<< std::endl;

    // Print the binary representation
    int numBits = sizeof(number) * 8;
    for (int i = numBits - 1; i >= 0; --i) {
        int bit = (number >> i) & 1;
        std::cout << bit;
    }
    std::cout << std::endl;

    return 0;
}
