//Write a program of to swap the two values using templates


#include <iostream>
using namespace std;
template <typename T>
int swap(T& a, T& b) 
{
    T temp = a;
    a = b;
    b = temp;
}
int main() 
{
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
    return 0;
}