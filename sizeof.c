#include<stdio.h>

int main()
{
    int i = 11;  //4
    char ch = 's';  //1
    float f = 12.34;  //4
    double d = 12.3456;  //8

    int arr[5];   //20
    char brr[5];  //5
    float crr[5];  //20
    double drr[5];  //40

    printf("%d\n",sizeof(i));
    printf("%d\n",sizeof(ch));
    printf("%d\n",sizeof(f));
    printf("%d\n",sizeof(d));


    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(brr));
    printf("%d\n",sizeof(crr));
    printf("%d\n",sizeof(drr));

    return 0;
}