#include <iostream>
#include <string>
//this program demonstrates numbers and their squares
using namespace std;

int main(){
    const int MIN = 1;
    const int MAX = 10;

    int count = MIN;
    //set count varibale to 1

    cout << "number \t number squared \t" << endl;  //\t = tab (tab key length)
    cout << "------------------------" << endl;
    while(count <= MAX){  //as long as count <= 10
        cout << count << "\t \t" << (count*count) << endl;
        count++;
    }

    return 0;
}