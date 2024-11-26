#include<stdio.h>

int main()
{
    int standard = 0;
    printf("enter your standard\n");
    scanf("%d",&standard);

    if(standard==1)
    {
        printf("your exam is at 7 am");
    }
    else if (standard==2)
    {
        printf("your exam is at 8am");
    }
    else if (standard==3)
    {
        printf("your exam is at 9am");
    }
    else if (standard==4)
    {
        printf("your exam is at 10am");
    }
    else
    {
        printf("wrong choice");
    }

    return 0;
}