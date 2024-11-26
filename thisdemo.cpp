#include<iostream>
using namespace std;

class arithmetic
{
    public:
        int No1;
        int No2;
       

        arithmetic(int A, int B)
        {
            No1=A;
            No2=B;
        }

        int Addition()
        {
            int Ans;
            Ans = this->No1+this->No2;
            return 0;
        }

        
};



int main ()
{
    int Ret = 0;
    arithmetic obj (21,11);
    Ret = obj.Addition();
    cout<<"addition is:"<<Ret<<"\n";

    Ret = obj.Addition();
    cout<<"addition is:"<<Ret<<"\n";


    return 0;
}