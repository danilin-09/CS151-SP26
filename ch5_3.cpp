#include <iostream>
#include <string>
//this program demonstrates a simple while loop
using namespace std;

int main(){

    int num = 0;
    while(num < 5){
        cout << num << " - hello \n";
        num++;  //num = num +1
    }
    cout << "done \n";
    return 0;
}