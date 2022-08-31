#include<stdio.h>
void swap(char *str,char *ptr)
{

int srr[20];int i,j,k;
for(i=0;str[i]!='\0';i++)
{
  srr[i]=str[i];
}
srr[i]='\0';
for(j=0;ptr[j]!='\0';j++)
{
  str[j]=ptr[j];
}
str[j]='\0';
for(k=0;srr[k]!='\0';k++)
{
  ptr[k]=srr[k];
}
ptr[k]!='\0';
}
int main()
{
  char str[20]="hellovivek";
  char ptr[20]="hellosir";
   printf("%s\n%s",str,ptr);
  swap(str,ptr);
  printf("\nafter swaping: \n");
  printf("%s\n%s",str,ptr);
  return 0;
}