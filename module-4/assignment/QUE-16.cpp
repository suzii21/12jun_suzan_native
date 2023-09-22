//Write a program to find the max number from given two numbers
//using friend function


#include <iostream>
using namespace std;
class MaxNumber 
{
    private:
        int num1;
        int num2;
    public:
        MaxNumber(int n1, int n2) : num1(n1), num2(n2) {}
        friend int findMax(const MaxNumber& maxNum);
};
int findMax(const MaxNumber& maxNum) 
{
    return maxNum.num1 > maxNum.num2 ? maxNum.num1 : maxNum.num2;
}
int main() 
{
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    MaxNumber maxNum(num1, num2);
    std::cout << "Max number is: " << findMax(maxNum) << std::endl;
    return 0;
}