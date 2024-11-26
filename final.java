class Demo 
{
    public int No1;
    public final int No2 = 21 ;

    public demo()
    {
        No1 = 11;
    }
}

class final1
{
    public static void main (String args[])
    {
        Demo obj = new Demo();
        obj.No1++;
        obj.No2++;           //obj.No2 = obj.No +1;



    }
}