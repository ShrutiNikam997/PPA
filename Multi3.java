class Demo extends Thread
{
    public void run()
    {
        int i = 0;
        for (i=0; i<100; i++)
        {
            System.out.println("Running thread :"+name+"with value :"+i);
        }
    }
}

class Multi3
{
    public static void main(String args[])
    {
        System.out.println("Current thread is :"+Thread.currentThread().getName());
        Demo obj1 = new Demo();
        Demo obj2 = new Demo();

        obj1.setName("PPA");
        obj2.setName("LB");

        obj1.start();
        obj2.start();
    }
}