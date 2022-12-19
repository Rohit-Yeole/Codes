#include<iostream>
using namespace std;

class Marvellous 
{   
    public :
        void fun();
        void gun();
};

class Demo
{
    public :
        int i;
    private :
        int j;
    protected :
        int k;
    public :
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
        }
    friend void Marvellous::fun();
    friend void Marvellous::gun();
};

void Marvellous::fun()                                      
{
    Demo obj;
    cout<<"Value of i is : "<<obj.i<<"\n";
    cout<<"Value of j is : "<<obj.j<<"\n";
    cout<<"Value of k is : "<<obj.k<<"\n";
}
void Marvellous::gun()                                      
{
    Demo obj;
    cout<<"Value of i is : "<<obj.i<<"\n";
    cout<<"Value of j is : "<<obj.j<<"\n";
    cout<<"Value of k is : "<<obj.k<<"\n";
}

int main()
{
    Marvellous mobj;
    mobj.fun();
    mobj.gun();

    return 0;
}