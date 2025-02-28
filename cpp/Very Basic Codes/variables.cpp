#include <iostream>

int main(){
    
    int file_size = 100, counter = 10;
    double sales = 9.99;

    // Swapping value of variables.
    int a = 2;
    int b = 5;
    int temp = a;

    a = b;
    b = temp;

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    //The 'const' sets the value of pi to 3.14 and it wont change.
    const double pi = 3.14;

    return 0;
}