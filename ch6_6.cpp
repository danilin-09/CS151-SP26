#include <iostream>
#include <string>
//this program demonstrates
using namespace std;

//function prototype
void changeMe(int number);

int main(){
    int number = 10;

    //output value of num
    cout << "Number is " << number << endl;

    //call changeMe function, passnumber as an argument
    changeMe(number);
    //output value in num
    cout << "number is " << number << endl;
    return 0;
}

void changeMe(int number){
    //change value of number to 0
    number = 0;
    cout << "Number in changeMe() is " << number << endl;
}