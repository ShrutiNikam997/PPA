#include<iostream>
using namespace std;

class arithmetic
{
    public:
        int No1;
        int No2;
        arithmetic()
        {
            No1=0;
            No2=0;
        }

        arithmetic(int A, int B)
        {
            No1=A;
            No2=B;
        }

        int Addition()
        {
            int Ans;
            Ans = No1+No2;
            return 0;
        }

        int Substraction()
        {
            int Ans;
            Ans = No1+No2;
            return 0;
        }

};



int main ()
{
    int value1 = 0, value2 = 0 , Ret =0;
    cout<<"Enter first number : \n";
    cin>>value1;

    cout<<"Enter second number : \n";
    cin>>value2;

    arithmetic obj (value1,value2);
    Ret = obj.Addition();
    cout<<"addition is:"<<Ret<<"\n";

    Ret = obj.Addition();
    cout<<"addition is:"<<Ret<<"\n";


    return 0;
}