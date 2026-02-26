#include <iostream>
#include <string>
//this program demonstrates using the getline function to read data into a string object
using namespace std;

int main(){
    //this makes the user's last name their city

    string name, city;

    /*
    cout << "Enter your full name." << endl;
    cin >> name;
    cout << "Enter your city." << endl;
    cin >> city;
    cout << "Hello " << name << ". You live in " << city << "." << endl;
    */

    cout << "Enter your full name." << endl;
    getline(cin, name);

    cout << "Enter your city." << endl;
    getline(cin, city);
    
    cout << "Hello " << name << ". You live in " << city << "." << endl;

    return 0;
}