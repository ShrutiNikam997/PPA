#include<stdio.h>


int multiplication(int No1, int No2)
{
    int ans=0;
    ans=No1*No2;
    return ans;
}


int main()
{
    //local variable
    int value1=0,value2=0, ret=0;
    printf("Enter first number : \n");
    scanf("%d",&value1);

    printf("Enter second number : \n");
    scanf("%d",&value2);

    ret = multiplication(value1,value2);
    printf("multiplication is : %d\n",ret);
    return 0;
}