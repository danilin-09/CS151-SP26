#include <iostream>
#include <string>
//danielle lindsay
//this program will mix 2 of the 3 primary colors together and output the result
using namespace std;

int main(){
    string color1, color2;
    cout << "This program will tell you the mix of 2 primary colors (red, yellow, blue)\n";
    cout << "Please enter your first primary color\n";
    cin >> color1;
    cout << "Please enter your second primary color\n";
    cin >> color2;

    if(color1 == "red"){
        if(color2 == "blue"){
            cout << "Mixing " << color1 << " and " << color2 << " makes purple." << endl;
        }
        if(color2 == "yellow"){
            cout << "Mixing " << color1 << " and " << color2 << " makes orange." << endl;
        }
        if(color2 == "red"){
            cout << "Mixing " << color1 << " and " << color2 << " makes red." << endl;
        }
    }
    if(color1 == "yellow"){
        if(color2 == "blue"){
            cout << "Mixing " << color1 << " and " << color2 << " makes green." << endl;
        }
        if(color2 == "yellow"){
            cout << "Mixing " << color1 << " and " << color2 << " makes yellow." << endl;
        }
        if(color2 == "red"){
           cout << "Mixing " << color1 << " and " << color2 << " makes orange." << endl;
        }
    }
    if(color1 == "blue"){
        if(color2 == "blue"){
            cout << "Mixing " << color1 << " and " << color2 << " makes blue." << endl;
        }
        if(color2 == "yellow"){
            cout << "Mixing " << color1 << " and " << color2 << " makes green." << endl;
        }
        if(color2 == "red"){
            cout << "Mixing " << color1 << " and " << color2 << " makes purple." << endl;
        }
    }
    return 0;
}