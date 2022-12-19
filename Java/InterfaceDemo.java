// Interface is a blueprint of class which contains ALL abstract methods in it
// 100% Abstraction

interface Circle
{
    float PI = 3.14f;                   //  public static final float PI = 3.14f; 
    
    float Area(float Radius);           //  public abstract float Area(float Radius);
    float Circumference(float Radius);  //  public abstract float Circumference(float Radius);
}

class Marvellous implements Circle
{
    public float Area(float Radius)
    {
        return PI * Radius * Radius;
    }
    public float Circumference(float Radius)
    {
        return 2 * PI * Radius;
    }
}

class InterfaceDemo
{
    public static void main(String arr[])
    {
        System.out.println("Value of PI is : "+Circle.PI);  // to demonstrate public and static
        //float PI = 7.28;      // to demonstrate final

        Circle cobj = new Marvellous();

        float Ret = 0.0f;
        Ret =  cobj.Area(10.5f);
        System.out.println("Area is : "+Ret);
        Ret =  cobj.Circumference(10.5f);
        System.out.println("Circumference is : "+Ret);
        
    }
}