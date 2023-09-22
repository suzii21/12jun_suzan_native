//Write a program of Addition, Subtraction, Division, Multiplication using
//constructor.

#include<iostream>
using namespace std;
int main()
{
    int x, y;
    int sum, subtraction, multiplication, modulo;
    float quotient;
    // Taking input from user 
    cout << "Enter First Number\n";
    cin >> x;
    cout << "Enter Second Number\n";
    cin >> y;
    // Adding two numbers 
    sum = x + y;
    // Subtracting two numbers 
    subtraction = x - y;
    // Multiplying two numbers
    multiplication = x * y;
    // Dividing two numbers 
    quotient = (float)x / y;
    cout << "\nSum = "<< sum;
    cout << "\nsubtraction = "<<subtraction;
    cout << "\nMultiplication = "<<multiplication;
    cout << "\nDivision = " << quotient;
    return 0;
}