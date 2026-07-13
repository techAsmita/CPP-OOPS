//Another pillar of oops where a child class inherits properties
//from parent class.
//Single inheritance (protected works only in inheritance)

#include<iostream>
#include<string>
using namespace std;

class Person
{
    public:
        string name;
        int age;

        Person(string n, int a)
        {
            this->name=n;
            this->age = a;
        }
        Person() //normal constructor
        {

        }

};

class Student : public Person
{
    //name and age already there
    //we need to make roll no.
    public:
        int rollno;

        void getInfo()
        {
            cout<<"name :"<<name<<endl;
            cout<<"age :"<<age<<endl;
            cout<<"rollno :"<<rollno<<endl;
        }
};

int main()
{
    Student s1;

    s1.name = "Asmita";
    s1.age = 21;
    s1.rollno = 12345;
    s1.getInfo();
}