#include<stdio.h>


void Display(int No)  //Callee
{
    static int iCnt = 0;

    if(iCnt < No)
    {
        printf("Jay Ganesh..\n");
        iCnt++;
        Display(No); //Recursive
    }
}


int main()  //Caller
{
    Display(4);

    return 0;
}