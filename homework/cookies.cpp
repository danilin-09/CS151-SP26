#include <iostream>
#include <string>
//this program calulates how many ingredients are needed for a recipe
using namespace std;

int main(){
    double sugarPerCookie, butterPerCookie, flourPerCookie;
    
    sugarPerCookie = 1.5/48.0;
    butterPerCookie = 1/48.0;  //use float?
    flourPerCookie = 2.75/48.0;
    
    int cookieAmount;
    cout << "How many cookies would you like to make?" << endl;
    cin >> cookieAmount;

    double neededSugar, neededButter, neededFlour;
    neededSugar = cookieAmount * sugarPerCookie;
    neededButter = cookieAmount * butterPerCookie;
    neededFlour = cookieAmount * flourPerCookie;

    cout << "You will need " << neededSugar << " cups of sugar, " << neededButter << " cups of butter, and " << neededFlour << " cups of flour to make " << cookieAmount << " cookies." << endl;

    return 0;
}