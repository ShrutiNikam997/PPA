class Base
{
    public int A,B;

    public Base()
    {
        System.out.println("Inside base constructor");
    }
    public void fun()
    {
        System.out.println("Inside fun of BAse");
    }
}

class Derived public Base
{
    public int X,Y
    public Derived(int i , int j)
    {
        super()
        System.out.println("Inside derived constructor");
        this.X = i;
        this.Y =j;
    }
    public void gun()
    {
        System.out.println("Inside gun of derived");
        super.fun();
        System.out.println("VAlue of A"+super.A);
        System.out.println("Value of X" +this.X);
    }
}



class keyword
{
    public static void main(String args[])
    {
        Derived dobj = new Derived(11,12);
        dobj.gun();
    }
}