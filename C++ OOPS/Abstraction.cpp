//Abstraction using abstract classes,
//hiding the internal implementation and showing only important data,
//they are meant to be inherited and not instantiated anywhere in class,

#include<iostream>
#include<string>
using namespace std;

class Shape //jinme pure virtual function aa jata hain unhe abstract class kaha jaata hain.
{
    virtual void draw() = 0; //now jitne bhi child classes honge unme draw 
                            //naam ka function implemented hona chahiye.
                            //also called pure virtual function.
};//can't make object of this class.

class Circle: public Shape
{
    public: 
    void draw()
    {
        cout<<"Drawing a circle."<<endl;
    }
};

int main()
{
    //Shape s1; //this will give an error
    return 0;
}