#include<stdio.h>
void sort(int *ptr,int size)
{int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[6]={2,3,4,8,1,9};
    sort(arr,sizeof(arr)/sizeof(int));
    for(int i=0;i<6;i++)
    {
     printf("%d ",arr[i]);
    }
    return 0;
}