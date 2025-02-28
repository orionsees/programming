#include <iostream>
using namespace std; // Because of this we dont have to mention std eveywhere.

int main(){
    double sales = 95000;
    double state_tax = 0.04;
    double county_tax = 0.02;

    double total_state_tax = sales*state_tax;
    double total_county_tax = sales*county_tax;

    float total_tax = total_state_tax+total_county_tax;
    double final_sales = sales - total_tax;

    //<< - Stream Insertion Operator
    cout << "Total Sales : $" << sales << endl
         << "Total State Tax : " << total_state_tax << endl
         << "Total County Tax : " << total_county_tax << endl
         << "Final Sales : $" << final_sales;

    return 0;
}