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
    in >> color2;

    if((color1 != string) || (color2 != string)){  //make code check if input is string
        cout << "Your input is not a color, please try again" << endl;
    }
    if(color1 == "red"){
        if(color2 == "blue"){
            cout << "Mixing " << color1 << " and " << color2 << " makes " << endl;
        }
        if(color2 == "yellow"){
            cout << "Mixing " << color1 << " and " << color2 << " makes "
        }
        if(color2 == "red"){
            cout << "Mixing " << color1 << " and " << color2 << " makes "
        }
    }
    if(color1 == "yellow"){
        if(color2 == "blue"){
            cout << "Mixing " << color1 << " and " << color2 << " makes "
        }
        if(color2 == "yellow"){
            cout << "Mixing " << color1 << " and " << color2 << " makes "
        }
        if(color2 == "red"){
           cout << "Mixing " << color1 << " and " << color2 << " makes " 
        }
    }
    if(color1 == "blue"){
        if(color2 == "blue"){
            cout << "Mixing " << color1 << " and " << color2 << " makes "
        }
        if(color2 == "yellow"){
            cout << "Mixing " << color1 << " and " << color2 << " makes "
        }
        if(color2 == "red"){
            cout << "Mixing " << color1 << " and " << color2 << " makes "
        }
    }
    return 0;
}