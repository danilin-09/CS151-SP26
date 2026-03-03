#include <iostream>
#include <string>
//this program uses if/else statement to determine a letter grade
using namespace std;

int main(){
    int testScore;
    cout << "Enter a number for a letter grade: " << endl;
    cin >> testScore;

    if (testScore >= 90)
        cout << "Your Grade is an A" << endl;
    else if (testScore >= 80)
        cout << "Your grade is a B" << endl;
    else if (testScore >= 70)
        cout << "Your grade is a C" << endl;
    else if (testScore >= 60)
        cout << "Your grade is a D" << endl;
    else if (testScore >= 0)
        cout << "Your grade is an F" << endl;
    else
        cout << "Invald score" << endl;
    
    return 0;
}