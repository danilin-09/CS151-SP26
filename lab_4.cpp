#include <iostream>
#include <string>
//this program prints even numbers from 60 to 20, but prints ## instead of 40
using namespace std;

int main(){

    int num;
    for(num = 60; num >= 20; num--){
        if(num % 2 == 0 && num != 40){
            cout << num << endl;
        }
        if(num % 2 == 0 && num == 40){
            cout << "##" << endl;
        }
    }
    return 0;
}