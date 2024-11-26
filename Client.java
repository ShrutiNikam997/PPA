import java.net.*;
import java.io.*;

class Client
{
    public static void main(String args[]) throws Exception
    {
        System.out.println("Client application is running");
        

        Socket sobj = new Socket("localhost",2100);
        System.out.println("Client gets successfully connected...\n");

        PrintStream ps = new PrintStream(sobj.getOutputStream());
        BufferedReader br1 = new BufferedReader(new InputStreamReader (sobj.getInuptStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader (System.in));
        String str1, str2;

        System.out.println("Marvellous messenger started...\n");
        while(!(str1 = br2.readLine()).equals("end"))
        {
            ps.println(str1);
            System.out.println(str1);
            st2 = br1.readLine();
            System.out.println("Enter message for server :");
            System.out.println("Server sayss : "+str2);
        }
        System.out.println("Thank you for using Marvellous messenger")
    }
}