//Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)

#include <iostream>
using namespace std;
// Person class
class Person 
{
protected:
    string name;
    int age;
public:
    Person() 
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void display() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
// Student class
class Student : public Person 
{
private:
    float percentage;
public:
    Student() 
    {
        cout << "Enter percentage: ";
        cin >> percentage;
    }
    void display() 
    {
        Person::display();
        cout << "Percentage: " << percentage << endl;
    }
};
// Teacher class
class Teacher : public Person {
private:
    int salary;
public:
    Teacher() 
    {
        cout << "Enter salary: ";
        cin >> salary;
    }
    void display() 
    {
        Person::display();
        cout << "Salary: " << salary << endl;
    }
};
int main() 
{
    // Create a student object
    Student student;
    // Create a teacher object
    Teacher teacher;
    // Display the student and teacher objects
    student.display();
    teacher.display();
    return 0;
}