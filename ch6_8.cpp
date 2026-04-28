#include <iostream>
#include <string>
//this program uses a function that returns a value
using namespace std;

//function prototype
int sum(int, int);
int main(){
    int num1 = 20;
    int num2 = 30;
    int sum;
    //first val, second val, total

    total = sum(num1, num2);
    cout << "the sum of " << num1 << " and " << num2 << " is " << total << ".\n";

    return 0;
}

int sum(int val1, int val2){
    
    return val1 + val2;
}