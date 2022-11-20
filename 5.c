#include<stdio.h>
int main()
{
    int n,i,s,e,max;
    printf("enter number of element : " );
    scanf("%d",&n);
    int a[n];

    for(i=0; i<n; i++)
        {
            scanf("%d",a+i);

        }
    printf("enter both number : ");
    scanf("%d%d",&s,&e);

    for(i=0; i<n; i++)
        {
            if(s==*(a+i))
                {
                    s=i;
                    break;

                }
        }

    max=*(a+s+1);


    for(i=s+2; *(a+i)!=e; i++)
        {
            if(max<*(a+i))
                max=*(a+i);

        }

    printf("\n");

    printf("maximum number is %d\n",max);

    return 0;

}
