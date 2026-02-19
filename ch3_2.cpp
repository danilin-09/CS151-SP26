#include <iostream>
#include <string>

using namespace std;

int main(){

    string name;
    int num1, num2, sum;

    cout << "What is your name?" << endl;
    cin >> name;

    cout << "Please enter 2 numbers. \n";
    cin >> num1 >> num2 ;

    sum = num1 + num2;
    cout << "The sum of the 2 numbers are " << sum << endl;

    return 0;
}