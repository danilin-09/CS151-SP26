#include <iostream>
#include <string>
//this program demonstrates a function with multiple parameters/arguments
using namespace std;

void showSum(int, int, int);

int main(){
    int value1, value2, value3;

    //prompt user to enter 3 numbers 
    cout << "please enter 3 random integers and I'll output the sum\n";
    cin >> value1 >> value2 >> value3;

    //call the function and pass the value as argument values
    showSum(value1, value2, value3);

    return 0;
}

void showSum(int num1, int num2, int num3){
    int sum = num1 + num2 + num3;
    cout << sum << endl;
}