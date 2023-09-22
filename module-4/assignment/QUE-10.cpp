//Assume that the test results of a batch ofstudents are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the
//marksobtained in two subjects and class result contains the total marks
//obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance)


#include <iostream>
using namespace std;
// Student class
class Student 
{
protected:
    int rollNumber;
public:
    void getRollNumber() 
    {
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }
};
// Test class
class Test
{
protected:
    int marks1, marks2;
public:
    void getMarks() 
    {
        cout << "Enter marks in subject 1: ";
        cin >> marks1;
        cout << "Enter marks in subject 2: ";
        cin >> marks2;
    }
};
// Result class
class Result : public Student, public Test 
{
private:
    int totalMarks;
public:
    void display() 
    {
        cout << "Roll number: " << rollNumber << endl;
        cout << "Marks in subject 1: " << marks1 << endl;
        cout << "Marks in subject 2: " << marks2 << endl;
        cout << "Total marks: " << totalMarks << endl;
    }
    void calculateTotalMarks() 
    {
        totalMarks = marks1 + marks2;
    }
};
int main() 
{
    // Create a Result object
    Result result;
    // Get the student's roll number
    result.getRollNumber();
    // Get the student's marks
    result.getMarks();
    // Calculate the student's total marks
    result.calculateTotalMarks();
    // Display the student's result
    result.display();
    return 0;
}