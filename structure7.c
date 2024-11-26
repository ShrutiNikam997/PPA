#include<stdio.h>


struct hello
{
int no;
float f;    

};

struct demo
{
    int data;
    struct hello hobj;
};

int main()
{
    struct demo dobj;  
    return 0;
}