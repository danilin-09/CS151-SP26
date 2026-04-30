#include <iostream>
#include <string>
//this program uses overloaded functions
using namespace std;

int square(int);
double square(double);

int main(){
    int userInt;
    double userDouble;
    
    cout << "enter an integer and double (decimal)\n";
    cin >> userInt >> userDouble;

    cout << "your integer squared is " << square(userInt) << " and your double squared is " << square(userDouble) << endl;

    return 0;
}

int square(int num){
    return num * num;
}

double square(double num){
    return num * num;
}