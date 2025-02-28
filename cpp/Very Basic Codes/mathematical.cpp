#include <iostream>

int main(){
    double x = 10;
    int y = 3;
    int addition = x+y;
    int subtraction = x-y;
    double division = x/y;
    int multiplication = x*y;

    std::cout << addition << std::endl;
    std::cout << subtraction << std::endl;
    std::cout << division << std::endl;
    std::cout << multiplication << std::endl;

    // Increment.
    int y1 = x++; // x = 11, y1 = 10
    std::cout << x << " "<< y1 << std::endl;
    int y2 = ++x; // x = 12, y2 = 12
    std::cout << x << "" << y2 << std::endl;

    // Decrement.
    x--;
    --x;

    return 0;
}