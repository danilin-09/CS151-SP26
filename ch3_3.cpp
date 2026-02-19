#include <iostream>
#include <string>
//this program demonstrates how overflow works in c++
using namespace std;

int main(){
    short maxShort = 32767;
    cout << "Maxshort is equal to " << maxShort << endl;

    //add 1 to maxShort
    maxShort = maxShort + 1;
    cout << "Maxshort is equal to " << maxShort << endl;
    //overflow: number keeps its value and becomes negative

    //subtract 1 from maxshort
    maxShort = maxShort - 1;
    cout << "Maxshort is equal to " << maxShort << endl;
    //underflow: number wraps around and changes to negative or positive depending on how small it is

    return 0;
}