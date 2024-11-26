import java.io.*;

class BinputX 
{
    public static void main(String args[])
    {
        try
        {
            InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);

        System.out.println("enter your name :");
        String name = bobj.readLine();

        System.out.println("Welcome: "+name);
        }

        catch(IOException obj)
        { }
    }
}