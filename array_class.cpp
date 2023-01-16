#include <bits/stdc++.h>
using namespace std;

class Instructor
{
public:
    string name, email;
    int age, id;
    Instructor(string name, string email, int age, int id)
    {
        this->age = age;
        this->email = email;
        this->name = name;
        this->id = id;
    }
    void print()
    {
        cout << name << endl
             << email << endl
             << age << endl
             << id << endl;
    }
    Instructor()
    {
    }
};
bool compare(Instructor a, Instructor b)
{
    return a.age < b.age;
}

int main()
{
    int size;
    cin >> size;
    // Instructor ins_arr[size];
    vector<Instructor> ins_arr;
    for (int i = 0; i < size; i++)
    {
        string temp_name, temp_email;
        int temp_age;
        cout << "Enter name" << endl;
        cin >> temp_name;
        cout << "Enter email" << endl;
        cin >> temp_email;
        cout << "Enter age" << endl;
        cin >> temp_age;
        ins_arr.push_back(Instructor(temp_name, temp_email, temp_age, i + 1));
    }
    sort(ins_arr.begin(), ins_arr.end(), compare);
    for (int i = 0; i < size; i++)
    {
        ins_arr[i].print();
    }
    return 0;
}