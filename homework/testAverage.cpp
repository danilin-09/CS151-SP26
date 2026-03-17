#include <iostream>
#include <string>
#include <iomanip>
//danielle lindsay
using namespace std;

int main(){
    double score1, score2, score3, score4, score5;  //5 scores to be averaged
    cout << "Please enter 5 test scores: \n";  //prompts user to enter the 5 scores
    cin >> score1 >> score2 >> score3 >> score4 >> score5;

    double average = (score1 + score2 + score3 + score4 + score5) /5;   //average of 5 scores
    cout << "The average test score is " << setprecision(1) << fixed << average << endl;  //outputs the average with 1 decimal place
    
    return 0;
}