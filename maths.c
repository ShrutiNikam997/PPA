#include<stdio.h>

int addition( int No1, int No2)
{
    int ANS=0;
    ANS=No1+No2;
    return ANS;
}
int main()
{

    int A=10;
    int B=11;
    int ret=0;
    printf("inside main function\n");

    ret=addition(A,B);
    printf("%d\n",ret);
    return 0;

}