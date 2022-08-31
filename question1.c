#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
  
}
int main()
{
int x,y;
printf("enter two numbers: ");
scanf("%d %d",&x,&y);
printf("first number is: %d\n",x);
printf("Second number is: %d\n",y);
swap(&x,&y);
printf("first number is: %d\n",x);
printf("Second number is: %d\n",y);
}