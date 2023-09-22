//Write a program to swap the two numbers using friend function
//without using third variable.

#include <iostream>
using namespace std;
class Swap
{
private:
    int num1, num2;
public:
    void getdata()
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }
    friend void swap_numbers(Swap &s);
    void display()
    {
        cout << "The swapped numbers are: " << num1 << " and " << num2 << endl;
    }
};
void swap_numbers(Swap &s)
{
    int temp;
    temp = s.num1;
    s.num1 = s.num2;
    s.num2 = temp;
}
int main()
{
    Swap s1;
    s1.getdata();
    swap_numbers(s1);
    s1.display();
    return 0;
}