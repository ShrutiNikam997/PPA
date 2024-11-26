#include<stdio.h>



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
    struct student priya;

    printf("size of object is %d\n",sizeof(amit));

    amit.rollno = 11;
    amit.division = 'A';
    amit.age = 19;
    amit.marks = 7.8;
    amit.salary = 21000;

    priya.rollno = 12;
    priya.division = 'B';
    priya.age = 19;
    priya.marks = 7.6;
    priya.salary = 22000;

    printf("age of amit :%d\n",amit.age);
    printf("age of priya : %d\n",priya.age);

    printf("salary of amit :%d\n",amit.salary);
    printf("salary of priya : %d\n",priya.salary);



    return 0;
}