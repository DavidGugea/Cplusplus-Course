#include <iostream>

using namespace std;

int cubeANumber(int number){
    // My code :
    return number * number * number;
}

double cube(double num){
    // Tutorial code
    /*
    double result = num * num * num;
    return result;
    */

    return num * num * num;
}

int main()
{
    // My Code: cout << cubeANumber(3) << endl;
    /*
    double answer = cube(5.0);
    cout << answer;
    */

    cout << cube(5.0);

    return 0;
}
