#include <iostream>
#include <string>

using namespace std;

int main(){
    char choice;

    //prompt user for a, b, or c 
    cout << "Enter a, b, or c." << endl;
    cin.get(choice);

    switch(choice){
        case 'a':
            cout << "you entered a\n";
            break;
        case 'b':
            cout << "you entered b\n";
            break;
        case 'c':
            cout << "you entered c\n";
            break;
        default:
        cout << "you didn't enter a, b, OR c\n";

    }


    return 0;
}