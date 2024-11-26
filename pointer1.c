#include<stdio.h>

int main()
{
    int no = 11;
    int * ptr = &no;
    double data = 99.999;
    double * dptr = &data;

    printf("%d\n",no);
    printf("%f\n",data);

    printf("%d\n",sizeof(no));
    printf("%d\n",sizeof(ptr));
    printf("%d\n",sizeof(data));
    return 0;
}