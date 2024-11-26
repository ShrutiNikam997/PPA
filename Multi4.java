class Demo extends Thread
{
    public void run()
    {
        try{
        int i = 0;
        for (i=0; i<5000; i++)
        {
            System.out.println("Running thread :"+name+"with value :"+i);
            Thread.sleep(1000);
        }
    }
    catch(Exception obj)
    {}
    }
}

class Multi4
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