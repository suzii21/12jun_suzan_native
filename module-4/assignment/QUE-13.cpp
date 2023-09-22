//Write a program to concatenate the two strings using Operator 
//Overloading


#include <iostream>
#include <string.h>
using namespace std;
// Class to implement operator overloading
class AddString {
public:
	// Classes object of string
	char s1[25], s2[25];
	// Parameterized Constructor
	AddString(char str1[], char str2[])
	{
		strcpy(this->s1, str1);
		strcpy(this->s2, str2);
	}
	// Overload Operator the string
	void operator+()
	{
		cout << strcat(s1, s2);
	}
};
int main()
{
	// Declaring two strings
	char str1[] = "module-4 ";
	char str2[] = "assignment";
	// Declaring of two strings
	AddString a1(str1, str2);
	// Call operator function
	+a1;
	return 0;
}
