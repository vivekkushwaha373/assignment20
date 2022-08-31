#include<stdio.h>
int lengthcount(char *str)
{
    int count=0;
    for(int s=0;str[s]!='\0';s++)
    {
        count++;
    }
    return count;
}
int main()
{
  int s;char str[20]="student";
s=lengthcount(str);
printf("length of string is: %d",s);
    return 0;
}