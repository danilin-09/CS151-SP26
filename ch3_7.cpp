#include <iostream>
#include <string>
#include <iomanip>
//this program demonstrates how setprecision rounds a floationg point number
using namespace std;

int main(){
    double quotient, num1 = 1364.23 , num2 = 23.91 ;
    quotient = num1 / num2;
    cout << quotient << endl;
    cout << setprecision(5) << quotient << endl;
    cout << setprecision(4) << quotient << endl;
    cout << setprecision(3) << quotient << endl;
    cout << setprecision(2) << quotient << endl;
    cout << setprecision(1) << quotient << endl;
    return 0;
}