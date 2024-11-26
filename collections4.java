//HashTable

import java.util.*;

class Collections4
{
    public static void main(String Args[])
    {
        HashTable<String , Integer> hobj = new HashTable<String , Integer>();

        hobj.put("PPA",19500);
        hobj.put("LB",20000);
        hobj.put("PYTHON",20500);
        hobj.put("Angular",21000);
        
        System.out.println(hobj.get("Python"));

    }
}