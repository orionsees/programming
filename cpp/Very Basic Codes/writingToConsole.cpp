#include <iostream>
#include <cmath>
using namespace std;


int main(){
    const double pi = 3.14159;
    cout << "Enter the Radius : " << endl;
    
    double radius;
    cin >> radius;
    
    double area = floor(pi*pow(radius, 2));
    cout << area << endl;
    
    return 0;
}