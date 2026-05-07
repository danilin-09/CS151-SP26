#include <iostream>
#include <string>
//this program demonstrates the range-based for loop
using namespace std;

int main(){

    //define integer array
    int numbers[] = {10, 20, 30, 40, 50};
    
    //display array values
    for(int val: numbers)
        cout << val << endl;
    return 0;
}