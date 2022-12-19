#include<iostream>
//using namespace std;

namespace Marvellous
{
    class Demo
    {
        public:
            int i,j;
            void fun()
            {
                std::cout<<"Inside fun of Demo from Marvellous\n";
            } 
    };
    class Hello
    {
        public:
            int x,y;
    };
}

namespace Infosysytems
{
    class Demo
    {
        public:
            int a,b;
            void fun()
            {
                std::cout<<"Inside fun of Demo from Infosystems\n";
            }
    };    
} 

int main()
{
    Marvellous::Demo obj1;
    obj1.fun();

    Infosysytems::Demo obj2;
    obj2.fun();

    using namespace Marvellous;

    Hello hobj;
    Demo obj3;

    return 0;
}