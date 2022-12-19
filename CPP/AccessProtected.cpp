#include<iostream>
using namespace std;

class Base
{
    public :
        int i;
    private :
        int j;
    protected :
        int k;

    public :
        Base()
        {
            i = 10;
            j = 20;
            k = 30;
        }
};

class Derived : public Base
{
    public :
        void fun()
        {
            cout<<"Value of public i from Base : "<<i<<"\n";       // A
            //cout<<"Value of private j from Base : "<<j<<"\n";      // NA
            cout<<"Value of protected k from Base : "<<k<<"\n";    // A
        }
};

int main()
{   
    Derived dobj;

    dobj.fun();

    return 0;
}