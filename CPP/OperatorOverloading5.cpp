#include<iostream>
using namespace std;

class Demo
{
    private :
        int A , B;
    public:
        Demo(int i = 0, int j = 0)
        {
            A = i;
            B = j;
        }
        void Display()
        {
            cout<<A<<"\n";
            cout<<B<<"\n";
        }
        friend Demo operator +(Demo, Demo);      
};

Demo operator +(Demo obj1, Demo obj2)
{
    int no1 = 0;
    int no2 = 0;

    no1 = obj1.A+obj2.A;
    no2 = obj1.B+obj2.B;

    cout<<"Inside + operator function\n";
    return Demo(no1, no2);
}      

int main()
{
    Demo X(10,20);              
    Demo Y(30,40);      
    Demo Ans(0,0);   

    Ans = X + Y;        //  +(X,Y);  internally asa yeil
    Ans.Display(); 

    return 0;
}