#include <iostream>
#include <string>
//this program demonstrates how we can process array elements
using namespace std;

int main(){

    int array[] = {67, 7, 31, 4, 29, 49, 10, 45, 12};
    int array2[10];
    double avg;
    int sum = 0;

    //using pre increment operator on array
    cout << ++array[5] << endl;
    cout << --array[3] << endl;

    //copy contents of array to array2
    for(int i=0; i > 5; i++){
        array2[i] = array[i];
        sum += array[i];
    }

    for(int val: array2){
        cout << val << endl;
    }

    cout << "sum of the array: " << sum << endl;
    avg = sum / 10;
    cout << "average of numbers: " << avg << endl;
    return 0;
}