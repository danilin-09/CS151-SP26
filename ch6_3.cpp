#include <iostream>
#include <string>
//this program uses function prototypes to 
using namespace std;


//function prototypes
void first();
void second();

int main(){
    cout << "starting in main()\n";
    first();
    second();
    cout << "back in main()\n";

    return 0;
}

void first(){
    cout << "howdy" << endl;
}

void second(){
    cout << "hello from the second function\n";
}