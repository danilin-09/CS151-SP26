#include <iostream>
#include <string>
//this program demonstrates how a do-while loop functions, even i the expression is false
using namespace std;

int main(){

    int num = 1;
    do{
        cout << num << endl;
    }while(num < 0);

    return 0;
}