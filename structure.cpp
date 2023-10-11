#include <iostream>
#include <string>
#include <cmath>

int main()
{
    std::cout << "Enter a number: ";
    int x{ };
    std::cin >> x;
 
    std::cout << "Enter another number: ";
    int y{ };
    std::cin >> y;
 
    std::cout << "The sum is: " << x + y << '\n';
    std::cout << "The difference is: " << x - y << '\n';
    std::cout << "The product is: " << x * y << '\n';
    std::cout << "The quotient is: " << x / y << '\n';
    std::cout << "The remainder is: " << x % y << '\n';
 
    return 0;
}

// #include <iostream>

// int main()
// {
//     std::cout << "Enter a number: "; // ask user for a number            
//     int x{ }; // define variable x to hold user input