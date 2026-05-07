#include <iostream>
#include <string>
//this program demonstrates an array being passed into a function
using namespace std;

void showValues(int[], int) //prototype

int main(){
    const int SIZE = 8;
    int nums[SIZE] = {5,10,15,20,25,30,35,40};

    cout << showValues(nums, SIZE);
    return 0;
}

void showValues(int nums[], int size){
    for(int i = 0; i < size; i++){
        cout << nums[i] << "  " << endl;
    }
}