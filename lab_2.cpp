#include <iostream>
#include <string>
#include <iomanip>
//this program calculates a user's BMI based on their weight and height
using namespace std;

int main(){
    int height, weight, age;
    string name;

    cout << "What is your name?" << endl;  //user's name
    cin >> name;

    cout << "How old are you?" << endl;  //user's age
    cin >> age;

    cout << "What is your height (in inches)?" << endl;  //user's height
    cin >> height;
    
    cout << "What is your weight in pounds?" << endl;  //user's weight
    cin >> weight;

    double bmi = (weight * 703.0) / (height * height);  //user's bmi

    if(bmi <= 18.5)
        cout << "Hi, " << name << ". You are " << age << " years old have a BMI of " << fixed << setprecision(1) << bmi << ", classifying you as underweight." << endl;
    else if(18.5 < bmi && bmi <= 24.9)
        cout << "Hi, " << name << ". You are " << age << " years old have a BMI of " << fixed << setprecision(1) << bmi << ", classifying you as normal weight." << endl;
    else if(25 < bmi && bmi <= 29.9)
        cout << "Hi, " << name << ". You are " << age << " years old have a BMI of " << fixed << setprecision(1) << bmi << ", classifying you as overweight." << endl;
    else if(bmi >= 30.0)
        cout << "Hi, " << name << ". You are " << age << " years old have a BMI of " << fixed << setprecision(1) << bmi << ", classifying you as obese." << endl;

    return 0;
}