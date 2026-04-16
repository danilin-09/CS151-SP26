#include <iostream>
#include <string>
#include <iomanip>
//this program uses nested loops to simulate a stop watch
using namespace std;

int main(){

    cout << fixed << right;
    cout.fill('0');

    for(int min = 0; min < 60; min++){
        for(int sec = 0; sec < 60; sec++){
            cout<< setw(2) << min << ";";
            cout<< setw(2) << sec << ";";            
        }
    }
    return 0;
}