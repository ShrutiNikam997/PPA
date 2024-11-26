interface Circle
{
    public float Radius = 10.5f;
    public float PI = 3.14f;

    public float area ();
    public float circumference();

}

class Marvellous implements Circle
{
    public float area()
    {
        return PI*Radius*Radius;
    }
    public float circumference
    {
        return 2*PI*Radius;
    }
}


class blueprint
{
    public static void main(String args[])
    {
        Marvellous mobj = new Marvellous();
        System.out.println("Area is :",mobj.area());
        System.out.println("circumference is : ",mobj.circumference());
    }
}