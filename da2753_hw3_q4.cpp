#include <iostream>
#include <math.h>
using namespace  std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main()
{;
    int roundingMethod;
    double realNumber;

    //User input
    cout << "Please enter a Real number:" << endl;
    cin >> realNumber;

    //Choose rounding method
    cout << "Choose your rounding method:" << endl;
    cout << "1. Floor round" << endl;
    cout << "2. Ceiling round" << endl;
    cout << "3. Round to the nearest whole number" << endl;
    cin >> roundingMethod;

    switch(roundingMethod)
    {
        case FLOOR_ROUND:
            cout << floor(realNumber) << endl;
            break;
        case CEILING_ROUND:
            cout << ceil(realNumber) << endl;
            break;
        case ROUND:
            cout << round(realNumber) << endl;
            break;
    }

    return 0;
}
