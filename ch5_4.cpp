#include <iostream>
#include <string>
//this program demonstrates how to use a while loop for input validation
using namespace std;

int main(){
    int number;

    //prompt the user for a number less than 10 
    cout << "Please enter a number less than 10" << endl;
    cin >> number;

    while(number >= 10){
        cout << "try again ^_^\n";
        cin >> number;
    }
    cout << "wunderbar :)" << endl;
    return 0;
}