#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

        Array(int iLength)
        {
            cout<<"Inside Constructor\n";
            iSize = iLength;                    // Here constructor allocates the characteristic
            Arr = new int[iSize];               // constructor allocates resources
        }
        ~Array()
        {
            cout<<"Inside Destructor\n";
            delete []Arr;                       // Here destructor deallocates the resource
        }

        void Accept()                               // this is also called as setter in company
        {
            cout<<"Enter the values : \n";
            int i = 0;
            for(i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }
        void Display()                              // this is also called as getter in company
        {
            cout<<"Elements of array are : \n";
            int i = 0;
            for(i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
        int Summation()
        {
            int iSum = 0 , i = 0;
            for(i = 0; i < iSize; i++)
            {
                iSum = iSum + Arr[i];
            }
            return iSum;
        }
};

int main()
{
    cout<<"Inside Main\n";

    int iRet = 0;

    Array obj1(4);
    obj1.Accept();
    obj1.Display();

    iRet = obj1.Summation();
    cout<<"Addition of array is : "<<iRet<<"\n";

    //Array obj2(6);

    return 0;
}