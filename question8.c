#include<stdio.h>
int main()
{
    int arr[10]={1,1,1,1,1,1,1,1,1,1};
    int *ptr;int sum=0;
    ptr=arr;//ptr=&arr[0] both are valid;
    for(int i=0;i<10;i++)
    {
        sum=sum+ptr[i];
    }
    printf("the sum  of array is : %d",sum);
}