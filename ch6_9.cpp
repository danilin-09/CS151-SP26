#include <iostream>
#include <string>
//this program uses a function that returns true or false
using namespace std;

bool isEven(int);

int main(){
    //prompt user for number
    int num;
    cout << "enter a number and i'll determine if it's even or odd\n";
    cin >> num;

    //indicate if num is even or odd 
    if(isEven(num)){ //if true
        cout << num << " is even.\n";
    }else{
        cout << num << " is odd.\n";
    }

    return 0;
}

bool isEven(int value){
    bool status;

    if(value % 2 == 0){
        status = true;
    }else{
        status = false;
    }
    return status;
}