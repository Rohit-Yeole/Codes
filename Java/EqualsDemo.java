
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

class EqualsDemo
{
    public static void main(String A[])
    {
        String s1 = "rry";
        String s2 = "rry";

        System.out.println("Hashcode of the s1 is : "+s1.hashCode());   // 1001
        System.out.println("Hashcode of the s2 is : "+s2.hashCode());   // 1001

        if(s1.equals(s2))           //  if("Hello" == "Hello")
        {
            System.out.println("Objects are same");
        }
        else
        {
            System.out.println("Objects are different");
        }

        if(s1 == s2)                //  if(1001 == 1001)
        {
            System.out.println("Objects are same");
        }
        else
        {
            System.out.println("Objects are different");
        }
    }
}