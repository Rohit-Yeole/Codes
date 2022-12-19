#include<iostream>
using namespace std;

class Demo
{
    public:                         // access specifier
        int i;                      // instance variable
        int j;                      // instance variable
        static int k;               // class variable
        static int l;               // class variable

        Demo()                      // default constructor
        {
            i = 0;
            j = 0;
        }

        Demo(int a, int b)          // parametrised constructor
        {
            i = a;
            j = b;
        }

        // void fun(const Demo *this)
        void fun()                  // instance method
        {
            // can access both static + non static
            cout<<"Inside non static method fun \n";
            cout<<"value of i is : "<<this->i<<"\n";
            cout<<"value of j is : "<<this->j<<"\n";
            cout<<"value of k is : "<<k<<"\n";
            cout<<"value of l is : "<<l<<"\n";
        }

        static void gun()          // class method
        {
            // can access only static
            cout<<"Inside static method gun \n";
            cout<<"value of k is : "<<k<<"\n";
            cout<<"value of l is : "<<l<<"\n";
        }
};

// Load time variables
int Demo::k = 0;
int Demo::l = 0;

int main()
{
    cout<<"Inside main \n";
    cout<<"Value of k is :"<<Demo::k<<"\n";             // 0
    cout<<"Value of l is :"<<Demo::l<<"\n";             // 0

    Demo::gun();

    Demo obj1(10,11);
    Demo obj2(20,21);
    Demo obj3;

    //cout<<"size of Demo is : "<<sizeof(obj)<<"\n"; // 1 byte for empty class object
    cout<<"Inside main again \n";
    cout<<"Value of i in obj1 is :"<<obj1.i<<"\n";      // 10
    cout<<"Value of i in obj2 is :"<<obj2.i<<"\n";      // 20

    cout<<"Value of j in obj1 is :"<<obj1.j<<"\n";      // 11
    cout<<"Value of j in obj2 is :"<<obj2.j<<"\n";      // 21

    obj1.fun();     // fun(&obj1);
    obj2.fun();

    //obj1.gun();    // Demo::gun(); // we cam also write like this  

    return 0;
}