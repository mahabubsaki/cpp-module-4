#include <bits/stdc++.h>

using namespace std;
class Student
{
public:
    string name;
    int std_id;
    int age;
    void print_info()
    {
        cout << name << " " << age << " " << std_id;
    }
};

class Rectengale
{
private:
    string mother_name, father_name;

public:
    int height, width;
    int triangle()
    {
        return height * width;
    };
    int perimeter()
    {
        return 2 * (height + width);
    }
    void setParent(string m, string f)
    {
        mother_name = m;
        father_name = f;
    }
    void printAll()
    {
        cout << height << " " << width << " " << mother_name << " " << father_name;
    }
};

class NormalUser
{
    // protected means these variables and functions can be used on this class and the other classes who will extend this
protected:
    int age;
    string name;
};

class PremiumUser : NormalUser
{
    // private means these variables and functions can be used on this class
private:
    string role;
    // public means these variables and functions can be used on this class , the other classes who will extend this and the other scopes. basically everywhere
public:
    void setPrivate(string r, string n, int a)
    {
        role = r;
        age = a;
        name = n;
    }
    void print_info()
    {
        cout << role << "\n";
        cout << age << "\n";
        cout << name << "\n";
    }
};

int main()
{
    // Rectengale x;
    // x.height = 29;
    // x.width = 20;
    // x.setParent("Maksuda", "Belal");
    // x.printAll();
    PremiumUser saki;
    saki.setPrivate("Admin", "Saki", 20);
    saki.print_info();
    return 0;
}