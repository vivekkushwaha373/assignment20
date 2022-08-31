#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    char *ptr;
    printf("enter a string: ");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    ptr=str;
    for(int n=strlen(str)-1;n>=0;n--)
    {
        printf("%c",*(ptr+n));
    }
    

    return 0;
}