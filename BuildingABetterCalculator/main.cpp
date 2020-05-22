#include <iostream>
using namespace std;

int calculator_myCode(){
    // My Code:
    int firstNumber, secondNumber;
    cout << "Print here your first number : ";
    cin >> firstNumber;
    cout << "Print here your second number : ";
    cin >> secondNumber;

    cout << "Choose one of the given operations : " << endl;
    cout << "1. Addition ( + )" << endl;
    cout << "2. Difference ( - )" << endl;
    cout << "3. Multiply ( * )" << endl;
    cout << "4. Division ( / )" << endl;
    cout << "5. Pow ( ^ )" << endl;

    int operation;
    cin >> operation;

    if(operation == 1){
        return firstNumber + secondNumber;
    }else if(operation == 2){
        return firstNumber - secondNumber;
    }else if(operation == 3){
        return firstNumber * secondNumber;
    }else if(operation == 4){
        return firstNumber / secondNumber;
    }else if(operation == 5){
        int result = 1;

        for(int i = 0 ; i < secondNumber; i++){
            result *= firstNumber;
        }

        return result;
    }else{
        cout << "You have to chose something between 1/2/3/4/5" << endl;
        return 0;
    }
}

int main()
{
    /* My code:
    int result = calculator_myCode();
    cout << result << endl;
    */
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    int result;
    bool resultFound = true;

    if(op == '+'){
        result = num1 + num2;
    }else if(op == '-'){
        result = num1 - num2;
    }else if(op == '*'){
        result = num1 * num2;
    }else if(op == '/'){
        result = num1 / num2;
    }else{
        cout << "Invalid operator.";
    }

    cout << result;


    return 0;
}
