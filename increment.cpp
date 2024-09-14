// Pre & post increment and decrement demonstration

#include <iostream>

int main() {
    int i = 0;
    int j = 3;
    
    std::cout << i++ << "\n"; // Must be 0
    std::cout << ++i << "\n";  // Must be 2
    
    std::cout << j-- << "\n"; // Must be 3
    std::cout << --j << "\n"; // Must be 1

    return 0;
}