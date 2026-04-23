#include <iostream>
#include <string>
//this program has 2 functions of different return types
using namespace std;

void displayMessage(){    //first function in c++
    cout << "hello from the display message function\n";

}
int main(){

    cout << "hello from main()\n";
    displayMessage();   //output type defined by main function

    cout << "back in main function\n";

    return 0;
}