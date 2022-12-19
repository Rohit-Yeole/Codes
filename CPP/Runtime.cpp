#include<iostream>
using namespace std;

class Base
{
    public :                        // Access specifier
        int A,B;

        void fun()                  // Function definition                  // 1000
        {
            cout<<"Base fun\n";
        }
        void gun(int i)             // Function Definition                  // 2000
        {
            cout<<"Base gun with one integer\n";
        }
        void gun(int i, int j)      // Overloaded function definition       // 3000
        {
            cout<<"Base gun with two integers\n";
        }
    
};

class Derived : public Base
{
    public :
        int X,Y;

        void sun()                          // Function definition          // 4000 
        {
            cout<<"Derived sun\n";
        }
        void fun(int i)                          // Function redefinition        // 5000
        {
            cout<<"Derived fun\n";
        }
};

int main()
{
    Derived dobj;

    // dobj.fun(11);            // CALL 5000 
    dobj.Base::fun();           // CALL 1000
    dobj.gun(11);               // CALL 2000
    dobj.gun(11,21);            // CALL 3000
    dobj.sun();                 // CALL 4000

    return 0;
}
