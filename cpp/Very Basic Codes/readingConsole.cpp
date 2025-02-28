#include <iostream>
using namespace std;

int main(){
    // Fahrenheit (°F) = (Temperature in degrees Celsius (°C) * 9/5) + 32.
    cout << "Enter the value in degrees Celsius (°C) : ";
    double degree;
    cin >> degree;
    double fahrenheit = (degree*(9.0/5)) + 32;
    cout << fahrenheit;
    return 0;
}