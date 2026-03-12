#include <iostream>
#include <string>
#include <iomanip>
//danielle lindsay
using namespace std;

int main(){
    double score1, score2, score3, score4, score5;
    cout << "Please enter 5 test scores: \n";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;

    double average = (score1 + score2 + score3 + score4 + score5) /5;
    cout << "The average test score is " << setprecision(3) << average << endl;
    return 0;
}