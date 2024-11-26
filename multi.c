#include<stdio.h>

int main()
{
    int arr[4][5];
    arr[2][2]=12;
    arr[0][3]=30;
    arr[3][3]=1;
    arr[1][2]=100;
    arr[0][4]=64;
    arr[3][4]=111;
    arr[1][1]=89;


    printf("%d\n",arr[3][3]);
    printf("%d\n",arr[0][3]);
    printf("%d\n",arr[3][4]);
    printf("%d\n",arr[2][2]);


    return 0;
}