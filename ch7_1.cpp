#include <iostream>
#include <string>
//this program will ask the user for numbers, store those numbers in an array
using namespace std;

int main(){
    const int employees = 7;
    int hours[employees];

    cout << "please enter the hours worked by the 4 employees \n";
    cin >> hours[0];
    cin >> hours[1];
    cin >> hours[2];
    cin >> hours[3];
    
    //display array values
    cout << hours[0] << " " << hours[1] << " " << hours[2] << " " << hours[3] << endl;
    return 0;
}