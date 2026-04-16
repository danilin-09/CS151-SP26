#include <iostream>
#include <string>
#include <fstream>
//this program demonstrates the use of fstream to write a file
using namespace std;

int main(){

    //opening file
    ofstream outputFile;
    outputFile.open("name.txt");

    //write to the file
    outputFile << "my name is danielle" << endl;

    //close file
    outputFile.close();

    return 0;
}