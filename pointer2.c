#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 23.89;
    double d = 45.1670;

    char * cptr = &ch;
    int * iptr = &i;
    float * fptr = &f;
    double *dptr = &d;

    return 0;
}