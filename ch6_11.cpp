#include <iostream>
#include <string>
//this program demontrates how local variables retain values
using namespace std;

void showLocal();   //function prototype
void showStatic();

int main(){
    showLocal();
    showLocal();

    for(int i = 0; i < 5; i++){
        showStatic();
    }
    return 0;
}

void showLocal(){
    int localNum = 5;
    cout << "localNum is " << localNum << endl;

    localNum = 99;

}

void showStatic(){
    static int statNum = 5;
    cout << "statNum is " << statnum << endl;
    statNum++;
}