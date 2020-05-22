#include <iostream>
using namespace std;

int exponentFunction_myCode(){
    // My Code:
    int result = 1;
    int num1, num2;
    cout << "Print here your first number : ";
    cin >> num1;
    cout << "Print here your second number : ";
    cin >> num2;

    for(int i = 0 ; i < num2; i++){
        result *= num1;
    }

    return result;
}

int power(int baseNum, int powNum){
    int result = 1;

    for(int i = 0 ; i < powNum ; i++){
        result *= baseNum;
    }

    return result;
}

int main()
{
    // My Code : cout << exponentFunction_myCode() << endl;
    cout << power(4, 2) << endl;

    return 0;
}
