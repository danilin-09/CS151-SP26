#include <iostream>
#include <string>
//this program demonstrates how to use type casting in c++
using namespace std;

int main(){
    char c = 'D';
    //cout (converts D to ascii value for character)
    cout << c << " is equivalent to " << static_cast<int>(c) << endl;

    //2 { (int)c }
    cout << c << " is equivalent to " << (int)c << endl;

    //3 { int(c) }
    cout << c << " is equivalent to " << int(c) << endl;

    return 0;
}
