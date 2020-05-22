#include <iostream>

using namespace std;

int main()
{
    int numberGrid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0 ; j < 2; j++){
            cout << numberGrid[i][j];
        }
        cout << endl;
    }

    // cout << numberGrid[2][0] << endl;
    /*
    MY CODE ( before seeing tutorial ):
    int x[2][5] = {
        {
            1, 2, 3, 4, 5
        },
        {
            6, 7, 8, 9, 10
        }
    };

    for(int i = 0 ; i < 2; i++){
        for(int j = 0 ; j < 5; j++){
            cout << x[i][j] << endl;
        }
    }
    */

    return 0;
}
