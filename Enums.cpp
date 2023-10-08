#include <iostream>
using namespace std;
enum Color { red, green, blue };

int main()
{
    Color MyColor;

    MyColor = Color :: red;
    MyColor = Color :: green;
    MyColor = Color :: blue;
    cout << "Color is :" << MyColor << endl;
    cout << "Color is :" << red << endl;
    cout << "Color is :" << green << endl;
    cout << "Color is :" << blue << endl;
    return 0;
}