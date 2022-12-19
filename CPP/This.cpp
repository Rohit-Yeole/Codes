#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        float f;
        double d;

    // void fun(Demo *this, int A)
    void fun(int A)
    {
        cout<<"Inside fun\n";
        cout<<"this->i"<<i<<"\n";
    }

    // int fun(Demo *this, int B, int C)
    void gun(int B , int C) 
    {
        cout<<"Inside gun\n";
    }
};

int main()
{
    Demo obj1;           // 100
    Demo obj2;           // 200

    obj1.fun(11);        // fun(&obj,11);        fun(100,11); 
    obj2.fun(11);        // fun(&obj2,11);       fun(200,11);                // gun(&obj,11,21);     gun(100,11,21);

    return 0;
}