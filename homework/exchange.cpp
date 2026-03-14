#include <iostream>
#include <string>
#include <iomanip>
//danielle lindsay
using namespace std;

int main(){

    double yenPerDollar = 98.93;  //conversion rates
    double euroPerDollar = .74;

    double dollars;  //user input
    cout << "Please enter the amount of USD you would like to convert: \n";
    cin >> dollars;  //input in dollars and cents

    double yenTotal = dollars * yenPerDollar;
    double eurosTotal = dollars * euroPerDollar;

    cout << "$" << dollars << " is equivalent to " << setprecision(4) << eurosTotal << "euros or " << yenTotal << " yen. \n";

    return 0;
}