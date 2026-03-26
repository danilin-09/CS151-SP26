#include <iostream>
#include <string>

using namespace std;

int main(){

    int num = 13;
    cout << "The variable num is " << num << endl;

    //using postfix notation to increment num
    num++;
    cout << "The variable num is now " << num << endl;

    //using prefix notation to decrement num
    --num;
    cout << "The variable num is finally " << num << endl;
    
    return 0;
}