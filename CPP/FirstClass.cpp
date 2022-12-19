#include<iostream>

using namespace std;

class Maths
{
    public:                    // Access Specifier
        int iNo1;              // Characteristics 
        int iNo2;              // Characteristics

    Maths()                    // Constructor(Default)
    {   
        cout<<"Inside Default Constructor\n";
        iNo1 = 0;
        iNo2 = 0;
    }

    Maths(int A , int B)       // Constructor(Parametrised)
    {
        cout<<"Inside Parametrised Constructor\n";
        iNo1 = A;
        iNo2 = B;
    }

    ~Maths()
    {
        cout<<"Inside Destructor\n";
        //Destructor
    }
    // int Addition(Maths *this)
    int Addition()             // Behaviour
    {
        return iNo1 + iNo2;
    }
    // int Subtraction(Maths *this)
    int Subtraction()          // Behaviour
    {
        return iNo1 - iNo2;
    }

};

int main()
{
    cout<<"Inside main function\n";

    Maths mobj1;    
    Maths mobj2(11,10);    

    int ret = 0;

    ret = mobj2.Addition();     // internally it is ret = Addition(&mobj2);
    // ret = Addition(200);
    cout<<"Addition is : "<<ret<<"\n";

    ret = mobj1.Addition();     // ret = Addition(&mobj1);          mobj1,mobj2 are caller object
    // ret = Addition(100);
    cout<<"Addition is : "<<ret<<"\n";

    ret = mobj2.Subtraction(); // ret = Subtraction(&mobj2)
    // ret = Subtraction(200);
    cout<<"Subtraction is : "<<ret<<"\n";

    ret = mobj1.Subtraction(); // ret = Subtraction(&mobj1)
    // ret = Subtraction(100);
    cout<<"Subtraction is : "<<ret<<"\n";

    return 0;
}
