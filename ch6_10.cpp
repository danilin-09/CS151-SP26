#include <iostream>
#include <string>
//this program uses a global variable 
using namespace std;

int num = 2; //global variable

void anotherFunc();  //function prototype

int main(){

    cout << "in main, num is " << num << endl;

    anotherFunc();
    cout << "num is " << num;
    return 0;
}

void anotherFunc(){
    cout << "in anotherFunct(), num is " << num << endl;
    num = 151;
    cout << "in anotherFunc(), num is changed to " << num << endl;
}