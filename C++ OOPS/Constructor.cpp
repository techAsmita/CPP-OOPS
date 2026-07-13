//Constructor: same name as class and automatically invoked
//when an object is created
//always declare them public, no return type.
//Same constructor name but different params is called constructor overloading.
//Constructor overloading (or function overloading is an example of polymorphism) (Compile-Time).

#include<iostream>
#include<string>
using namespace std;

class Teacher
{
    private:
        double salary;
    public:
        string name;
        string dept;
        string subject;
        // Teacher() //non-parameterized constructor
        // {
        //     dept = "Computer Science";
        // }
        Teacher(string n, string d, string s, double sal)
        {
            name = n;
            dept = d;
            subject = s;
            salary = sal;
        }
        void setsal(double s)
        {
            salary = s;
        }
        double getsal()
        {
            return salary;
        }
        void getInfo()
        {
            cout<< "Name : "<< name <<endl;
            cout<< "Subject : "<< subject <<endl;
        }
};

int main()
{
    Teacher t1("Asmita", "CSE", "C++", 50000);
    t1.getInfo();
}