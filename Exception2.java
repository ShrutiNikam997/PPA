

import java.util.*;

class Exception2
{
    public static void main (String args[])
    {
        try
        {

        
        Scanner sobj = new Scanner(System.in);
        int Arr[] = { 10,20,30,40,50};

        System.out.println("Enter the index number");
        int i = sobj.nextInt();

        System.out.println(Arr[i]);

        System.out.println(Arr[i]);
    }

    catch(ArrayOutOfBoundsException obj)
    {
        System.out.println("Inside catch block ");

    }

    finally
    {
        System.out.println("Inside finally block");
    }

    System.out.println("End of code");

    }
}