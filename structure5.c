#include<stdio.h>


struct demo
{
    int *p;
    int *q;

};

int main()
{
    struct demo obj;

    int no = 11;
    float f = 90.99;

    obj.p = &no;
    obj.q = &f;

    printf("%d\n",*obj.p);
    printf("%f\n",obj.q);
    return 0;
}