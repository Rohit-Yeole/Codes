// abstract class is a class which contains 0 or more abstract method in it
// 0 to 100% Abstraction

abstract class Arithematic
{
    public int Addition(int iNo1, int iNo2)
    {
        return iNo1 + iNo2;
    }
    public abstract int Subtraction(int No1, int No2);
    // virtual int Subtraction(int iNo1, int iNo2) = 0;
} 

class Marvellous extends Arithematic
{
    public int Subtraction(int iNo1, int iNo2)
    {
        return iNo1 - iNo2;
    }
}

class AbstractDemo
{
    public static void main(String arr[])
    {
        Arithematic aobj = new Marvellous();   // Allowed   // it is reference
        Marvellous mobj = new Marvellous();
        int Ret = 0;
        Ret = mobj.Addition(11,10);
        System.out.println("Addition is : "+Ret);
        Ret = mobj.Subtraction(11,10);
        System.out.println("Subtraction is : "+Ret);
    }
}