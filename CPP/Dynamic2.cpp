#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;

    Demo()
    {
        cout<<"Inside Constructor"<<"\n";
    }

    ~Demo()
    {
        cout<<"Inside Destructor"<<"\n";
    }

    void fun()
    {
        cout<<"Inside fun"<<"\n";
    }
};

int main()
{
    //Demo obj1;                    // Static object
    
    Demo * ptr = NULL;             // pointer is created
    ptr = new Demo;               // Dynamic object
    
    ptr->fun();
    cout<<"Value of i is :"<<ptr->i<<"\n";

    delete ptr;

    return 0;
}