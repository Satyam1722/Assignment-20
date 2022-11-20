#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],i,n;
    printf("enter the string : ");
    fgets(s,100,stdin);
    s[strlen(s)-1]='\0';
    for(i=strlen(s)-1; i>=0; i--)
        printf("%c",*(s+i));
    return 0;
}
