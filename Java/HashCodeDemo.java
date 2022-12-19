
class Demo
{
    public int No1;
    public int No2;

    public Demo(int a, int b)
    {
        this.No1 = a;
        this.No2 = b;
    }
}

class HashCodeDemo
{
    public static void main(String A[])
    {
        Demo obj = new Demo(11,21);
        System.out.println("Hashcode of the obj is : "+obj.hashCode());

    }
}