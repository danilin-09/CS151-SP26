#include <iostream>
#include <string>
#include <random>  //used to generate random numbers
//this program simulates rolling a dice with random numbers
using namespace std;

int main(){
    const int min = 1;  //minimum value of a dice
    const int max = 6;  //max value of a dice

    //create a random object
    random_device rand;

    uniform_int_distribution<int> diceValue(min, max);

    cout << "Rolling the die 3 times \n";
    cout << "Roll 1: " << diceValue(rand) << endl;
    cout << "Roll 2: " << diceValue(rand) << endl;
    cout << "Roll 3: " << diceValue(rand) << endl;


    return 0;
}