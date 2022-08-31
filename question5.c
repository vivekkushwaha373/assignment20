#include<stdio.h>
int* max(int *n1,int *n2)
{
    if(*n1>*n2)
    return n1;
    else
    return n2;
}
int main()
{
   int n1,n2,*maximum;
   printf("enter the first number: ");
   scanf("%d",&n1);
   printf("enter the second number: ");
   scanf("%d",&n2);
   maximum=max(&n1,&n2);

   printf("maximum number is: %d",*maximum);

    return 0;
}