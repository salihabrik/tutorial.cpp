#include <iostream>
using namespace std;

int main()
// {
//     bool A = 1, B = 0;
//     std::cout << (A && B) << std::endl;
//     std::cout << (A || B) << std::endl;
//     std::cout << (!A ) << std::endl;
//     std::cout << ( !B) << std::endl;
//     std::cout << !(A && B) << std::endl;
//     std::cout << !(A || B) << std::endl;



// }

// {
//     bool Result;
//     Result = !(5 > 6 || 7 == 7) && !(1 || 0);
//     cout << Result << endl;
// }
{
    bool Result;
    Result = (5 > 6 || 7 == 7 )||( 1 || 0);
    Result = !(5 > 6 && 7 == 7)||( 1 || 0);
    Result = !(5 > 6 && 7 == 7) || !(1 || 0);
    Result = !(5 > 6 || 7 == 7) && !(1 || 0);
    Result = ((5 > 6 && 7 <= 8) || (8>1 && 4<= 3)) && 1;
    Result = ((5 > 6 &&  !(7 <= 8)) && (8>1 || 4<=3) || 1 );
    cout << Result << endl;
}