#include <iostream>

using namespace std;

void guessingGame_MyCode(){
    int guessNumber = 5;
    int num1;
    int tries = 0;

    string username;
    cout << "Print here your user name : ";
    cin >> username;

    while(true){
        cout << "Print here your guess number : ";
        cin >> num1;

        if(num1 == guessNumber){
            tries++;
            cout << "Congratulations " << username << " you found the guess number. Number of tries : " << tries << endl;
            break;
        }else if(num1 > guessNumber){
            cout << "Your number is bigger than the guess number" << endl;
            tries++;
        }else if(num1 < guessNumber){
            cout << "Your number is smaller than the guess number" << endl;
            tries++;
        }
    }
}

int main()
{
    // guessingGame_MyCode();
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(guess != secretNum && !outOfGuesses){
        if(guessCount < guessLimit){
            cout << "Enter guess: ";
            cin >> guess;

            guessCount++;
        }else{
            outOfGuesses = true;
        }
    }

    if(!outOfGuesses){
        cout << "You Win!";
    }else{
        cout << "Out of guesses";
    }

    return 0;
}
