#include<stdio.h>
#pragma pack(1)


struct student
{
int rollno;   //4 byte
char division;   // 1 byte
int age;          //4 byte
float marks;      //4 byte
int salary;       //4 byte
};


int main()
{

    struct student amit;
    

    printf("size of object is %d\n",sizeof(amit));

   

    return 0;
}