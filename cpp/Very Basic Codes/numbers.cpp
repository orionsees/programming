#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int binary = 0b1111111; // Binary Representation of 255
    int hexa = 0xFF; // Hexadecimal Representation of 255

    unsigned onlyPositive = 54; // Doesnt accepts negative value.

    cout << binary << endl << hexa << endl;
    cout << onlyPositive;

    // Narrowing
    int number = 1'000'000;
    short another {number};
    cout << another;

    //Generating Random Numbers
    long elapsedSeconds = time(0); // Jan 1 1970
    srand(elapsedSeconds);
    int num = rand() % 10;
    cout << number;
    cout << num;

}