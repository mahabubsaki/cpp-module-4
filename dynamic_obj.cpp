#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id, age;
    string name;

    Student(int id, int age, string name)
    {
        this->age = age;
        this->id = id;
        this->name = name;
    }
    void print()
    {
        cout << id << endl
             << age << endl
             << name << endl;
    };
};

int main()
{

    Student *saki = new Student(523, 20, "Saki");
    saki->print();
    Student *rokib = new Student(695, 26, "rokib");
    (*rokib).print();
    delete saki;
    delete rokib;
};