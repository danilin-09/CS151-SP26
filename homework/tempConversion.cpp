#include <iostream>
#include <string>
//this program calculates celcius temperature from fahrenheit temperature
using namespace std;

int main(){

    int fahTemp, celTemp;

    cout << "Celcius temperature: " << endl;
    cin >> celTemp;

    fahTemp = (1.8 * celTemp) + 32;
    cout << "Fahrenheit temperature: " << fahTemp << " F \n";

    return 0;
}