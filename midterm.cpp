/*
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    double weight, factor, answer;
    weight = 115.5;
    factor = 3.0;

    answer = weight / factor;
    cout << setprecision(1) << fixed << answer << endl;
    return 0;
}
*/
/*
#include <iostream>
#include <string>

using namespace std;

int main(){
    int integer1, integer2, integer3;

    cout << "Please enter 3 integer values\n";
    cin >> integer1 >> integer2 >> integer3;

    int min;
    if(integer1 < integer2 && integer1 < integer3)
        min = integer1;
    else if(integer2 < integer1 && integer2 < integer3)
        min = integer2;
    else if(integer3 < integer1 && integer3 < integer2)
        min = integer3;
    cout << "The smallest integer value is " << min << endl;

    return 0;
}
    */

/*
#include <iostream>
#include <string>

using namespace std;

int main(){


    
    double length, width;

    cout << "Please enter the length and width of your rectangle (in inches)\n";
    cin >> length >> width;

    length = length / 12;
    width = width / 12;

    double perimeter = 2 * (length + width);
    cout << "The perimeter of your rectangle is " << perimeter << " feet.\n";

    double area = length * width;
    cout << "The area of your rectangle is " << area << " squared feet.\n";

    return 0;
}
*/
/*
#include <iostream>
#include <string>
#include <random>

using namespace std;

int main(){
    const int min = 1;
    const int max = 6;

    random_device rand;
    uniform_int_distribution<int> randomValue(min, max);
    cout << randomValue(rand) << endl;

    return 0;
}
*/

// What's wrong with this program?

 

#include <isostream>

using namespace std;

 

int Main():

{

        int a, b, c:

        a = 3;

        b = 4;

        c = a + b;

        cout << "The value of c is: /n ";

        cout << b << endl;

        return 0;

 }