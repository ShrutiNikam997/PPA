#include<stdio.h>


void marvellous()
{
    static int x = 10;
    x++;
    printf("value of x %d\n",x);

}

int main()
{

    printf("demostration of static storage class : \n");
    marvellous();
    marvellous();
    marvellous();
    return 0;
}