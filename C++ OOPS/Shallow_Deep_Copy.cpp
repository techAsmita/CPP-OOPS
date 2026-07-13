//What all we have seen till now is all shallow copy.
//Shallow copy is ok but issue comes in that when we are doing 
//dynamic memory allocation.
//jitne bhi functions call kiye jaate hain woh stack memory 
//function mein kiye jaate hain

#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string n, double cgpa)
    {
        this->name=n;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    Student(Student &obj)
    {
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }
    void getInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Cgpa: "<<*cgpaPtr<<endl;
    }
};

int main()
{
    Student s1("Asmita", 8.35);
    
    Student s2(s1); //all info copied.
    s2.getInfo();
    return 0;
}