#include <iostream>

using namespace std;  // => Instead of using directive, you can instead use explicit namespace prefixes to acess identifiers  
                     // => defined in a namespace.
int main()
{
    int luckyNums[20];

    luckyNums[0] = 100;

    cout << luckyNums[0];  // => I believe you meant: luckyNums[0] 
                          // => Otherwise, you're attempting to acess an uninitilized element in your array

    return 0;
}
