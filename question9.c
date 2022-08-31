#include<stdio.h>
int main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int *ptr;
ptr=arr;
for(int t=sizeof(arr)/sizeof(arr[0])-1;t>=0 ;t--)
{
    printf("%d ",*(ptr+t));
}
    return 0;
}