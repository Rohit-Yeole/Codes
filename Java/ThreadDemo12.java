import java.util.*;

class Data                    // Data is resource for thread t1 and t2
{
    public int Arr[];
    public Data(int size)
    {
        Arr = new int[size];  // what Arr gets allocated here is resource(size) from constructor
    }
    protected void finalize()
    {
        Arr = null;          // Resource is deallocated
    }   

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }
}

class DemoEven extends Thread
{
    Data dobj;
    public DemoEven(Data obj)
    {
        dobj = obj;
    }
    public void run()
    {
        int i = 0;
        for(i = 0; i < dobj.Arr.length; i++)
        {
            if(dobj.Arr[i] % 2 == 0)
            {
                System.out.println("Even numbers are : "+dobj.Arr[i]);
            }
        }
    }
}

class DemoOdd extends Thread
{
    Data dobj;
    public DemoOdd(Data obj)
    {
        dobj = obj;
    }
    public void run()
    {
        int i = 0;
        for(i = 0; i < dobj.Arr.length; i++)
        {
            if(dobj.Arr[i] % 2 != 0)
            {
                System.out.println("Odd numbers are : "+dobj.Arr[i]);
            }
        }
    }
}

class ThreadDemo12
{
    public static void main(String A[]) throws InterruptedException
    {
        Data obj1 = new Data(6);
        obj1.Accept();

        DemoEven eobj =  new DemoEven(obj1);
        DemoOdd oobj =  new DemoOdd(obj1);

        Thread t1 = new Thread(eobj);
        Thread t2 = new Thread(oobj);

        t1.start();
        t2.start();
    
        t1.join();
        t2.join();
    }
}