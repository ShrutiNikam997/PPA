#include<stdio.h>



struct demo
{
    int no;
    float f;
};


int main()
{
    struct demo obj;
    struct demo *p = &obj;
    obj.no = 11;
    return 0;
}