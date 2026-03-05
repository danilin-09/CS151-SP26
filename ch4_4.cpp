#include <iostream>
#include <string>
//this program demonstrates using logical operators in c++
using namespace std;

int main(){
    //ask the user to input a number representing temperature
    int temp;
    cout << "Enter a temperature" << endl;
    cin >> temp;

    if(temp >= 60 && temp <= 85){
        cout << "The temperature is comfortable" << endl;
        cout << "Go outside and wear your sunblock!" << endl;
    }
    if(temp >= 100 || temp <= 50){
        cout << "The temperature is extreme, stay indoors." << endl;
    }
    return 0;
}