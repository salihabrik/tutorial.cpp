#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Round value of 2,4 :" << round(2.4) << endl;
    cout << "Round value of 2,9 :" << round(2.9) << endl;
    cout << "Round value of 2,6 :" << round(2.6) << endl;

    cout << "Square root of 50 :" << sqrt(25) << endl;
    cout << "Round value of 50 :" <<  round (sqrt(50)) << endl;

    cout << "Ceil value of 2,4 :" << ceil(2.4) << endl;
    cout << "Ceil value of 2,9 :" << ceil(2.9) << endl;

    cout << "Floor value of 2,4 :" << floor(2.4) << endl;
    cout << "Floor value of 2,9 :" << floor(2.9) << endl;

    cout << "Power of 2^3 :" << pow(2,3) << endl;
    cout << "Power of 3^3 :" << pow(3,3) << endl;


    cout << "Absolute value of -10 :" << abs(-10) << endl;
    cout << "Absolute value of 10 :" << abs(10) << endl;

    return 0;
}