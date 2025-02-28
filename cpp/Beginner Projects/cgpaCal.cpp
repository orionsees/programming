#include <iostream>
#include <list>
using namespace std;

// This is a CGPA Calculator for Mumbai University.
// Ask for Total Subjects. Ask for marks scored in each and max marks that can be scored.

/* Grade Points Scale is below.
80 ≤ Marks ≤ 100: O / 10
75 ≤ Marks < 80: A / 9
70 ≤ Marks < 75: B / 8
60 ≤ Marks < 70: C / 7
50 ≤ Marks < 60: D / 6
45 ≤ Marks < 50: E / 5
40 ≤ Marks < 45: P / 4
Marks < 40: F / 0
*/

// Ask for EC(Sum of Credits).
// GPA = ECG(Sum of the Product of Credits and Grades) / EC(Sum of Credits)


int main(){
    cout << "Enter the number of courses taken : ";
    int courses;
    cin >> courses;
    
    list<int> listECG; 
    list<int> listCredPts;

    for (int i = 0; i < courses; ++i){
        
        cout << "\nEnter the details for course no." << i+1 << " :" << endl;
        double scoredVal;
        double maxVal;
        double creditPts;
        cout << "---> Marks Scored :";
        cin >> scoredVal;
        cout << "---> Maximum Marks :";
        cin >> maxVal;
        cout << "---> Credit Points :";
        cin >> creditPts;
        listCredPts.push_back(creditPts);
        cout << "---------------------------" << endl;
        
        double percentage = (scoredVal*100)/maxVal;
        cout << "Your percentage is " << percentage << "." << endl;

        if (percentage >= 80 && percentage <= 100){
            cout << "Grade: O / Grade Point: 10" << endl;
            listECG.push_back(10*creditPts);            
        } else if (percentage >= 75 && percentage < 80) {
            cout << "Grade: A / Grade Point: 9" << endl;
            listECG.push_back(9*creditPts);   
        } else if (percentage >= 70 && percentage < 75) {
            cout << "Grade: B / Grade Point: 8" << endl;
            listECG.push_back(8*creditPts);   
        } else if (percentage >= 60 && percentage < 70) {
            cout << "Grade: C / Grade Point: 7" << endl;
            listECG.push_back(7*creditPts);   
        } else if (percentage >= 50 && percentage < 60) {
            cout << "Grade: D / Grade Point: 6" << endl;
            listECG.push_back(6*creditPts);   
        } else if (percentage >= 45 && percentage < 50) {
            cout << "Grade: E / Grade Point: 5" << endl;
            listECG.push_back(5*creditPts);   
        } else if (percentage >= 40 && percentage < 45) {
            cout << "Grade: P / Grade Point: 4" << endl;
            listECG.push_back(4*creditPts);   
        } else {
            cout << "Grade: F / Grade Point: 0" << endl;
            listECG.push_back(0);   
        }
    }
    
    cout << "\n-----------------------------------" << endl;
    double totalGradePts = 0;
    for (int val : listECG) {
        totalGradePts += val;  // Add each element to the sum
    }
    cout << "Grade Points : " << totalGradePts << endl;

    double totalCPts = 0;
    for (int val2 : listCredPts) {
        totalCPts += val2;  // Add each element to the sum
    }
    cout << "Credit Points : " << totalCPts << endl;

    double gpa = totalGradePts/totalCPts;
    cout << "Finally, your GPA is : " << gpa << endl;
    cout << "-----------------------------------" << endl;

    return 0;
    
}