#include <iostream>
#include <string>
//this program demonstrates the difference between prefix and postfix notation
using namespace std;

int main(){
    int num, val = 12;
    
    //use postfix notation in an output statement
    cout << val++ << endl; //prints 12
    cout << val << endl;   //prints 13

    cout << ++val << endl; //displays 14 (increases var by 1 before displaying it)

    //val = 14
    num = --val;   //num = val = 13
    cout << "num = " << num << endl;
    cout << "val = " << val << endl;

    //
    num = val--;   //num = 13 , val = 12
    cout << "num = " << num << endl;
    cout << "val = " << val << endl;

    return 0;
}