class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Base constructor");
    }
    public void Fun()
    {
        System.out.println("Inside Base Fun");
    }
}

class Derived extends Base    //class Derived : public Base
{
    public int X,Y;
    public Derived()
    {
        System.out.println("Derived Constructor");
    }
    public void Gun()
    {
        System.out.println("Inside Derived gun");
    }
}


class Single
{
    public static void main(String Args[])
    {
        Derived dobj = new Derived();
        dobj.Fun();
        dobj.Gun()

    }
}