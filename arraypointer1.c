#include<stdio.h>

int main()
{

    int arr[5]= {10,20,30,40,50};

    printf("%d\n",arr);
    printf("%d\n",&arr);
    printf("%d\n",&arr[0]);

    printf("first element of arrray %d\n",arr[0]);
    printf("second element of array %d\n",arr[1]);
    printf("third element of array %d\n",arr[2]);

    printf("%d\n",arr[2]);
    printf("%d\n",*(arr+2));
    printf("%d\n",*(2+arr));
    printf("%d\n",2[arr]);

    return 0;
}