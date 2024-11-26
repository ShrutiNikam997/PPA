#include<stdio.h>
#pragma pack(1)
struct demo
{
    int no;
    float f;
    int data;
    char c;

};

union hello
{
    int no;
    float f;
    int data;
    char c;

};


int main()
{
    struct demo dobj;
    union hello hobj;

    printf("size of structure %d\n",sizeof(dobj));
    printf("size of union  %d\n",sizeof(hobj));


    hobj.no = 1;
    printf("%d\n",hobj.no);

    hobj.data = 2;
    printf("%d\n",hobj.data);

}