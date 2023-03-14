#include <iostream>

using namespace std;

struct Student
{
    string id;
    string name;
    int age;
};

int main() 
{
    Student student;
    student.age = 19;
    student.id = "001";
    student.name = "Jack";
    cout << "student id is " << student.id << endl; 
    cout << "student name is " << student.name << endl;
    cout << "student age is " << student.age << endl; 
    return 0;
}

