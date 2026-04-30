#include <iostream>
#include <string>
//this program uses a reference variable as a function parameter
using namespace std;

void doubleNum(int &);
int main(){

    int value = 30;
    cout << "in main(), the value is " << value << endl;
    doubleNum(value);
    cout << "in main(), the value is now " << value << endl;

    return 0;
}

void doubleNum(int &refVar){
    refVar *= 2;  // value now equal to 60
}