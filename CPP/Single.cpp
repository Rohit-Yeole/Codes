#include<iostream>
using namespace std;

class Base
{
    public :
        int A,B;

        Base()
        {
            cout<<"Inside Base Constructor\n";
        }

        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }

        void fun()
        {
            cout<<"Inside Base fun\n";
        }
};

class Derived : public Base                         // class Derived extends Base (Syntax of Java)
{
    public :
        int X,Y;

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
        }
        
        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }

        void gun()
        {
            cout<<"Inside Derived gun\n";
        }
};  

int main()
{
    // Derived dobj;                    // Static memory allocation

    Derived * ptr = NULL;

    ptr = new Derived();                // Dynamic memory allocation

    ptr->fun();
    ptr->gun();

    delete ptr;

    return 0;
}