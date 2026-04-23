#include <iostream>
#include <string>
//this program demonstrates functions calling other functions
using namespace std;

void deeper(){
    cout << "inside the deeper function\n";
}

void deep(){
    cout << "inside deep function\n"; 
    deeper();
    cout << "back in deep function\n";
}

int main(){

    cout << "starting in main()\n";
    deep();
    cout << "back in main()\n";

    return 0;
}