#include <iostream>
#include <string>
#include <iomanip>  //this library is required for formatting output
//this program uses setw to format numbers into aligned columns
using namespace std;

int main(){
    int num1, num2, num3, num4, num5, num6, num7, num8, num9;
    num1 = 508;
    num2 = 21;
    num3 = 67;
    num4 = 7;
    num5 = 76;
    num6 = -964;
    num7 = 90;
    num8 = 676;
    num9 = 20;

    //display the first row of numbers
    cout << setw(5) << num1 << setw(5) << num2 << setw(5) << num3 << endl;

    //display the second row of numbers
    cout << setw(5) << num4 << setw(5) << num5 << setw(5) << num6 << endl;

    //display the third row of numbers
    cout << setw(5) << num7 << setw(5) << num8 << setw(5) << num9 << endl;
    return 0;
}