//Deallocate the constructor to destroy it, only static memory ko deallocate karta hain.

#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    Student()
    {
        cout<<"This is a default constructor."<<endl;
    }
    ~Student()
    {
        cout<<"This is a destructor."<<endl;
    }
};

int main()
{
    Student s1;
}