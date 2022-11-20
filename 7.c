#include<stdio.h>
#include<string.h>
int main()
{

    char s[1000];
    int i,v=0,c=0;
    printf("enter the strings : ");
    fflush(stdin);
    fgets(s,1000,stdin);
    s[strlen(s)-1]='\0';
    for(i=0; *(s+i); i++)
        {
            if((*(s+i)>='a' && *(s+i)<='z') || (*(s+i)>='A' && *(s+i)<='Z' ))
                {
                    if(*(s+i)=='a' || *(s+i)=='e' || *(s+i)=='i' || *(s+i)=='o' || *(s+i)=='u' || *(s+i)=='A' || *(s+i)=='E' || *(s+i)=='I' || *(s+i)=='O' || *(s+i)=='U')
                        {
                            v++;
                        }
                    else
                        c++;
                }
        }

        printf("vowels is %d\n",v);
        printf("consonants is %d\n",c);
    return 0;
}

