#include <iostream>
#include <string>
//using validation to determine whaat character a user entered
using namespace std;

int main(){
    char ch;
    //prompt the user for a character
    cout << "Please enter a digit or letter!\n";
    ch = cin.get();
    if(ch >='0' && ch <= '9')
        cout << "You have entered a digit." << endl;
    else if(ch >= 'A' && ch <= 'Z')
        cout << "You have entered an uppercase letter." << endl;
    else if(ch >= 'a' && ch <= 'z')
        cout << "You have entered a lowercase letter.\n";
    else
     cout << "PLEASE enter a LETTER or NUMBER" << endl;
    return 0;
}