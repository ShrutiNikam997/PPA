#include<stdio.h>




struct demo
{
    int data;
    struct hello
        {
        int no;
        float f;    
        }hobj;
};

int main()
{
    struct demo dobj;
    dobj.data = 11;
    dobj.hobj.no = 1;
    dobj.hobj.f = 90.99;  
    return 0;
}