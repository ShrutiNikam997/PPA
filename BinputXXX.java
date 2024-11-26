import java.io.*;

class Binput 
{
    public static void main(String args[])  throws IOException
    {
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);

        System.out.println("enter first number :");
        int No1 = Integer.parseInt(bobj.readLine());

         System.out.println("enter first number :");
        int No1 = Integer.parseInt(bobj.readLine());

        int Ans = No1+No2;
        System.out.println(Ans);
        
        
    }
}