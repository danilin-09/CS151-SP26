#include <iostream>
#include <string>

using namespace std;

void displayValue(int);
int main(){
    cout << "passing the vaue of 5 to displayValue\n";
    displayValue(5);
    cout << "back in main\n";
    return 0;
}

void displayValue(int num){
    cout << "in displayValu, the parameter is " << num << endl;
}