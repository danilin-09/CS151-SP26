#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Hello world" << endl; //same as line 7
    cout << "Hello world \n";

    int value = 5;
    cout << "The value is " << value << endl; //concatenated message

    int siblings;
    siblings = 3;
    cout << "I have " << siblings << " siblings." << endl;

    cout << "1" << "2" << endl; //prints 12 as a string
    cout << "1" << 2 << endl;  //same as 16
    cout << 1 << 2 << endl;   //same as 17

    //sizeof operator
    cout << "The size of an int is " << sizeof(int) << " bytes." << endl;
    cout << "The size of the siblings variable is " << sizeof(siblings) << " bytes. \n";
    return 0;
}

//this program demonstrates the use of strings and other data types
