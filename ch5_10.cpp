#include <iostream>
#include <string>
//this program demonstrates how a sentinel value works 
//this example uses -1 as the sentinel
using namespace std;

int main(){

    int sum = 0, num;
    cout << "please enter a number. type -1 to stop\n";
    cin >> num;

    while(num != -1){
        sum+=num;
        cout << "please ener a number. type -1 to stop\n";
        cin >> num;

    }

    cout << "the total is " << sum << endl;
    return 0;
}