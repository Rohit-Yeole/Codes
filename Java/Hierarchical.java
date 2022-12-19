
class A
{
    public int A,B;
    public Base()
    {
        System.out.println("Inside Base Constructor");
        this.A = 10;
        this.B = 20;
    }
    public void fun()       // Definition
    {
        System.out.println("Inside Base Fun");
    }
    public void gun()       // Definition
    {
        System.out.println("Inside Base gun");
    }
    public void fun(int No)     // Overloaded Definition
    {
        System.out.println("Inside Base Fun with one integer");
    }
}

class B extends A      
{
    public int X,Y;
    public Derived()
    {
        System.out.println("Inside Derived Constructor");
        this.X = 30;
        this.Y = 40;   
    }
    public void sun()       // Definition
    {
        System.out.println("Inside Derived sun");
    }
    public void gun()       // Overrided Definition
    {
        System.out.println("Inside Derived gun");
    }
}

class C extends A
{

}

class Hierarchical
{
    public static void main(String p[])
    {
        
                

    }
}