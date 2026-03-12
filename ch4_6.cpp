#include <iostream>
#include <string>
//this program demonstrates the use of the ternary operation 
using namespace std;

int main(){
    int x, y, max;

    //have he user enter 2 integers
    cout << "Prease enter 2 numbers" << endl;
    cin >> x >> y;

    max = (x > y) ? x : y;

    cout << "The max value of the 2 is " << max << endl;

    return 0;
}