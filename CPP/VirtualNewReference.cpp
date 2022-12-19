#include<iostream>
using namespace std;

class Base
{
    public :
        int A,B;

        void fun()                      // 1000
        {
            cout<<"Base fun\n";
        }
        virtual void gun()              // 2000
        {
            cout<<"Base gun\n";
        }   
        virtual void sun()              // 3000
        {
            cout<<"Base sun\n";
        } 
        virtual void run()              // 4000
        {
            cout<<"Base run\n";
        } 
};

class Derived : public Base
{
    public :
        int X,Y;

        void gun()                      // 5000
        {
            cout<<"Derived gun\n";
        }
        virtual void run()              // 6000
        {
            cout<<"Derived run\n";
        }
        virtual void mun()              // 7000
        {
            cout<<"Derived mun\n";
        }
};

int main()
{
    Derived dobj;
    Base &bref = dobj;            // Upcasting

    // bref is a reference of base type referring to dobj which is the object of derived class
    bref.fun();          // Base fun
    bref.gun();          // Derived gun
    bref.sun();          // Base sun
    bref.run();          // Derived run
    //bp->mun();          // Error

    return 0;
}



