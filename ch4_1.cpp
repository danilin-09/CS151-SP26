#include <iostream>
#include <string>

using namespace std;

int main(){

    int age;
    cout << "How old are you?" << endl;
    cin >> age;
    if(age >= 21)
        cout << "You are legally allowed to drink alcohol" << endl;
    else
        cout << "You are NOT legally allowed to drink alcohol" << endl;
    return 0;
}