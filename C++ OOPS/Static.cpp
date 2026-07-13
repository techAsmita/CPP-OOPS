//Final important concept is "static" keyword
//initialised once and kept in function variables lifetime.
//static objects: lifetime objects

#include<iostream>
#include<string>
using namespace std;

// void fun()
// {
//     static int x = 0;
//     cout<<"x: "<<x<<endl;
//     x++;
// }


//when declared static in a class it is shared by every object in class.
class ABC
{
    public:
        ABC()
        {
            cout<<"constructor.\n";
        }
        ~ABC()
        {
            cout<<"destructor.\n";
        }

};
int main()
{
    // fun();
    // fun();
    // fun();
    if(true)
    {
        static ABC obj;
    }
    cout<<"end of main fnx\n";
    return 0;
}

//Friend function and friend class not much asked in interviews.