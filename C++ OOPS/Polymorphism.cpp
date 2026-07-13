//ability of objects to take different forms
//compile time and run time.
//in compile time function return can be different but name shall be same.
//function overriding is dependent on inheritance (run time),
//parent and child can have same function but implementation is different.

#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
        string name;

        Student(){
            cout<<"non-parameterized."<<endl;
        }
        Student(string name)
        {
            this->name=name;
            cout<<"Parameterized."<<endl;
        }
};

int main()
{
    Student s1("tony stark"); //parameterized constructor called.
    return 0;
}

//Another example of run time polymorphism is "Virtual functions".
//they are dynamic in nature and written virtual in base class only and child class its written normally.
//example: virtual void hello() (this is made in parent and now child class will reimplement this)