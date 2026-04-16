#include <iostream>
#include <string>
//this program demonstrates the use of a loop to keep a running total
using namespace std;

int main(){

    int sum = 0, num = 1;
    while(num <= 10){
        sum+= num;
        num++;
    }
    cout << "sum of numbers 1-10 is " << sum << endl;
    return 0;
}