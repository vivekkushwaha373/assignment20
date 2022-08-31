#include<stdio.h>
#include<string.h>
void count(char *s)
{   int vowel=0,consonant=0;
for(int i=0;s[i]!='\0';i++)
    {
    if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
    vowel++;
    else
    consonant++;
    }
    printf("number of vowel: %d\n",vowel);
    printf("number of consonant: %d",consonant);
}
int main()
{
   char str[20];
   printf("enter a string: ");
   fgets(str,20,stdin);
   str[strlen(str)-1]='\0';
   count(str);
    return 0;
}