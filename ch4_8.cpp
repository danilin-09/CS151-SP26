#include <iostream>
#include <string>
//this program demonstrates the scope of multiple variables with the same name
using namespace std;

int main(){
    int number;

    //prompt user for value store it in number
    cout << "Enter a number greater than 0\n";
    cin >> number;

    if(number > 0){
        //define a variable called number
        int number;

        //prompt user for another numner
        cout << "Please enter another number\n";
        cin >> number;

        //display the value of number in this context
        cout << "The second number you entered is: " << number << endl;
        
    }

    //displays number value in initial context
    cout << "The first number you entered was: " << number << endl;
    return 0;
}