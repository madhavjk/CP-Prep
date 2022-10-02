/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
 
int main()
{
    float radius, area;
 
    std::cout << "Enter the radius of circle : ";
    std::cin >> radius;
    area = 3.14 * radius * radius;
    std::cout << "Area of circle with radius "
              << radius << " is " << area;
}
