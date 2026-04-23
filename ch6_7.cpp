#include <iostream>
#include <string>
//this program uses a funcion to perform division
//if devision by 0 is detected, 0 returns
using namespace std;

void divide(double, double);
int main(){
    int num1, num2;

    //prompt user for 2 numbers
    cout << "enter 2 numbers for division\n";
    cin >> num1 >> num2;

    //call function, pass in values
    divide(num1, num2);

    return 0;
}

void divide(double val1, double val2){
    if(val2 == 0){
        cout << "CAN'T DIVIDE BY 0\n";
        return;
    }
    cout << "the quotient is " << (val1 / val2);
}