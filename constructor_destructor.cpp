#include <bits/stdc++.h>

using namespace std;

class People
{
private:
    string name, f_name, m_name;
    int id, age;

public:
    // this is a constructor which dont have a return type and function name will be same as class name
    People(string name, string f_name, string m_name, int age, int id)
    {
        this->name = name;
        this->f_name = f_name;
        this->m_name = m_name;
        this->age = age;
        this->id = id;
    }

    void printAll()
    {
        cout << name << "\n";
        cout << f_name << "\n";
        cout << m_name << "\n";
        cout << age << "\n";
        cout << id << "\n";
    }

    // this is a destructor which we always should write bottom of the class
    // destructors will call when we extit the scopes where their class is defined . if the scopes have multiple class declaration then it will call in reverse order
    // destructors will only be needed when we use new keyword
    ~People()
    {
        cout << "Called \n";
        // printAll();
    }
};

class Person
{
public:
    string name;
    Person *father, *mother;
    Person()
    {
        father = NULL;
        mother = NULL;
    };
    Person(string name, string f, string m)
    {
        this->name = name;
        father = new Person;
        father->name = f;
        mother = new Person;
        mother->name = m;
    }
    ~Person()
    {
        cout << "Called\n";
        if (father != NULL)
        {
            delete father;
        }
        if (mother != NULL)
        {
            delete mother;
        }
    }
    void print()
    {
        cout << name << endl
             << father->name << endl
             << mother->name;
    }
};

int main()
{
    // People saki("saki", "Belal", "Maksuda", 20, 1969);
    // saki.printAll();
    Person saki("saki", "belal", "mother\n");
    saki.print();
    return 0;
}