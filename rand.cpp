#include <iostream>
#include <string>
//this program demonstrates how break and continue statements work
using namespace std;

int main(){
    for(int i = 1; i <= 10; i++){
        cout << i << endl;

        if(i == 4){
            continue;
            cout << i << endl;
        }
        if(i == 7){
            break;
        }
    }
    return 0;
}