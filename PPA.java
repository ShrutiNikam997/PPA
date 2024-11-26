import Marvellous.Arithmetic;
import Infosystem.Mathematic;


class PPA
{
    public static void main(String args[])
    {
        Arithmetic aobj = new Arithmetic();
        Mathematic mobj = new Mathematic();

        System.out.println(aobj.Addition(11,12));
        System.out.println(aobj.Substraction(12,2));

        System.out.println(aobj.Multiplication(11,12));
        System.out.println(aobj.Division(12,2));
    }
}