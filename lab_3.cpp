#include <iostream>
#include <string>

using namespace std;

int main(){
    int number;
    
    cout << "Please enter a number between 1 and 10" << endl;
    cin >> number;

    switch(number){
        case 1:
            cout << "In Spanish, 1 is uno" << endl;
            cout << "In Chinese, 1 is 一 (yi)" << endl;
            break;
        case 2:
            cout << "In Spanish, 2 is dos" << endl;
            cout << "In Chinese, 2 is 二 (er)" << endl;
            break;
        case 3:
            cout << "In Spanish, 3 is tres" << endl;
            cout << "In Chinese, 3 is 三 (san)" << endl;
            break;
        case 4:
            cout << "In Spanish, 4 is cuatro" << endl;
            cout << "In Chinese, 4 is 四 (si)" << endl;
            break;
        case 5:
            cout << "In Spanish, 5 is cinco" << endl;
            cout << "In Chinese, 5 is 五 (wu)" << endl;
            break;
        case 6:
            cout << "In Spanish, 6 is seis" << endl;
            cout << "In Chinese, 6 is 六 (liu)" << endl;
            break;
        case 7:
            cout << "In Spanish, 7 is siete" << endl;
            cout << "In Chinese, 7 is 七 (qi)" << endl;
            break;
        case 8:
            cout << "In Spanish, 8 is ocho" << endl;
            cout << "In Chinese, 8 is 八 (ba)" << endl;
            break;
        case 9:
            cout << "In Spanish, 9 is nueve" << endl;
            cout << "In Chinese, 9 is 九 (jiu)" << endl;
            break;
        case 10:
            cout << "In Spanish, 10 is diez" << endl;
            cout << "In Chinese, 10 is 十 (shi)" << endl;
            break;
        default:
            cout << "You did not enter a number between 1 and 10. Please try again." << endl;
            break;
            
    }
    return 0;
}