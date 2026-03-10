#include <iostream>
#include <string>

using namespace std;

int main(){
    char choice;

    //prompt user for a, b, or c 
    cout << "Enter a, b, or c." << endl;
    cin.get(choice);

    switch(choice){
        case 'A':
            cout << "you entered a\n";
            break;
        case 'B':
            cout << "you entered b\n";
            break;
        case 'C':
            cout << "you entered c\n";
            break;
        default:
        cout << "you didn't enter a, b, OR c\n";

    }


    return 0;
}