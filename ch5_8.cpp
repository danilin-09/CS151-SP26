#include <iostream>
#include <string>
//this program displays numbers and their squares
//for loop version of ch5_5
using namespace std;

int main(){

    const int MIN = 1, MAX = 10;
    int num;

    cout << "Number \t\t Number squared\n";
    cout << "-----------------------------\n";

    for(num = MIN; num <= MAX; num++){
        cout << num << "\t\t" << num*num << endl;
    }
    return 0;
}