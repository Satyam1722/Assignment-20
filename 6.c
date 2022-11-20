#include<stdio.h>
#include<string.h>
int main()
{

    char s[1000];
    int i;
    printf("enter the strings : ");
    fflush(stdin);
    fgets(s,1000,stdin);
    s[strlen(s)-1]='\0';
    for(i=0; *(s+i); i++);
    printf("Length is %d ",i);

    return 0;
}
