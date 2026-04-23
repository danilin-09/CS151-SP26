#include <iostream>
#include <string>
#include <random>
//danielle lindsay
//this program is a guessing game where the user has to guess a number between 1 and 100
using namespace std;

int main(){

    const int MIN = 1 , MAX = 100;
    int num, guessCount = 1;

    random_device rand;
    uniform_int_distribution<int> guessNumber(MIN, MAX);
    int correctNumber = guessNumber(rand);

    cout << "This program allows you to play a guessing game.\n";
    cout << "I will think of a number between 1 and 100 and will allow you to guess until you get it.  For each guess, I will tell you whether the right answer is higher or lower than your guess.\n";
    
    cout << "I'm thinking of a number between 1 and 100..." << endl;
    

    do{
        cout << "Your guess?: " << endl;
        cin >> num;
        if(num == correctNumber){
            cout << "You guessed correct!\n";
            cout << "It took you " << guessCount << " tries.\n";
        }else{
            if(num < correctNumber){
                cout << "Guess higher!\n";
                guessCount++;
            }else{
                if(num > correctNumber){
                    cout << "guess lower!\n";
                    guessCount++;
                }else{
                    if((num < MIN) || (num > MAX)){
                        cout << "out of range! Guess again.\n";
                        guessCount++;
                    }
                }
            }
        }
    }while(num != correctNumber);


    return 0;
}