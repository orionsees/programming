#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    //Write a program for rolling dice.
    srand(time(0));
    int num = (rand() % (1-6+1)) + 1;
    int num2 = (rand() % (1-6+1)) + 1;
    cout << "The two dices are : "<< num << ", " << num2;

}