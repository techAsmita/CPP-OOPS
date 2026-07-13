//What is oop? a way to write code using classes and objects.
//Practical implementation is vectors etc.
//Classes and Objects
//Objects: real world entities which are tangible and instances of classes.
//Classes: Bluprint of objects ki objects kaise dikhegi.
//Classes have data members and methods (functions) in it.
//In c++, we put semicolon to end a class.
#include<iostream>
#include<string>
using namespace std;

class Teacher
{
    //properties/attributes
    private:
        double salary; //can't be accessed in main function
    public:
        string name; //by default they are declared "private"
        string department;
        string subject;
    
    //methods/member functions
    void changeDept(string newDept)
    {
        department = newDept;
    }
    void setSalary(double s) //setter and getter methods to acces private members.
    {
        salary = s;
    } 
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Shradha"; 
    t1.subject = "C++";
    //t1.salary = 25000; //this will give error now
    t1.department = "Computer Science";
    t1.setSalary(25000);

    cout<<t1.name<<","<<t1.subject<<","<<t1.department<<endl;
    cout<<t1.getSalary()<<endl;
    return 0;
}

//Access modifiers: public, private and protected.
//They are declared by putting these keywords before data members.
//In C, we have structures and they are public and classes in C++ are private.
