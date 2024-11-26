#include<stdio.h>


struct demo
{
   int data;
   struct demo obj;  //error

};

int main()
{
    struct demo obj;

    
    return 0;
}