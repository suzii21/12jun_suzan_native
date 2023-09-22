//Write a program to Mathematic operation like Addition, Subtraction,
//Multiplication, Division Of two number using different parameters and
//Function Overloading

#include <iostream>
using namespace std;
class Calculator 
{
public:
  int add(int a, int b) 
  {
    return a + b;
  }
  int subtract(int a, int b) 
  {
    return a - b;
  }
  int multiply(int a, int b) 
  {
    return a * b;
  }
  int divide(int a, int b) 
  {
    return a / b;
  }
};
int main() 
{
  Calculator calc;
  int a = 10;
  int b = 5;
  cout << "Addition: " << calc.add(a, b) << endl;
  cout << "Subtraction: " << calc.subtract(a, b) << endl;
  cout << "Multiplication: " << calc.multiply(a, b) << endl;
  cout << "Division: " << calc.divide(a, b) << endl;
  return 0;
}
