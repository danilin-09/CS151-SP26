#include <iostream>
#include <string>
//this program
using namespace std;

int main(){
    bool lightOn = true;
    bool doorOpen = false;

    if(lightOn){
        cout << "The room is bright" << endl;
    }
    if(doorOpen)
        cout << "The door is open." << endl;
    else 
        cout << "The door is closed" << endl;

    return 0;
}