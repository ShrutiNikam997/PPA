#include<stdio.h>

struct demo
{
    int A;
    int B;

};

int main ()
{
     struct demo dobj;
      dobj.A = 11;
      dobj.B = 12;

      int *cptr= &dobj.A;
      int *dptr= &dobj.B;


      printf("%d\n",dobj.A);
      printf("%d\n",dobj.B);
      printf("%d\n",*dptr);
      printf("%d\n",*cptr);

    return 0;
}
