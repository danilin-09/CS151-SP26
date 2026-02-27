#include <iostream>
#include <string>
//this program demonstrates ticket sales with different ticket prices
using namespace std;

int main(){
    int aSeats, bSeats, cSeats;
    cout << "How many Class A seats were sold?" << endl;
    cin >> aSeats;
    cout << "How many Class B seats were sold?" << endl;
    cin >> bSeats;
    cout << "How many Class C seats were sold?" << endl;
    cin >> cSeats;

    int income;
    income = (aSeats * 15) + (bSeats * 12) + (cSeats * 9);

    cout << aSeats << " Class A seats were sold." << endl;
    cout << bSeats << " Class B seats were sold." << endl;
    cout << cSeats << " Class C seats were sold." << endl;

    cout << "In total, $" << income << " were generated from ticket sales." << endl;
    return 0;
}