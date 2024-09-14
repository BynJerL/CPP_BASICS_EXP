// Challenge (actually for JS, but do for C++ instead): https://www.codewars.com/kata/55a70521798b14d4750000a4/train/javascript

#include <iostream>
#include <string>

std::string greet(std::string name);

int main(){
    std::cout << greet("Andy") << "\n";

    return 0;
}

std::string greet(std::string name) {
    return "Hello, " + name + " how are you doing today?";
}
