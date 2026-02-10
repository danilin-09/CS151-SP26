#include <iostream>
#include <string>
//this program demonstrates the cin object by asking the user to enter their name

using namespace std;

int main(){
    string name;  //asks user's name
    cout << "What is your name? " << endl;
    //saves user input into name variable
    cin >> name;

    //print out greeting
    cout << "Hello, " << name << "!" << endl;

    return 0;
}
