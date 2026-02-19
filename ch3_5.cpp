#include <iostream>
#include <string>
//this program demonstrates how multiple assignment and conbined assignment works in c++
using namespace std;

int main(){
    int x, y, z;

    //multiple assignment 
    x = y = z = 151;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;

    //combined assignment
    x += 5;
    y /= 3;
    z %= 5;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;

    return 0;
}