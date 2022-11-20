#include<stdio.h>
#include<string.h>

void sort(int *p,int size){
 int i,j,temp;

    for(i=0; i<size; i++)
        {

            for(j=i+1; j<size ; j++)
                {
                    if(*(p+i)>*(p+j))
                        {
                               temp=*(p+i);
                               *(p+i)=*(p+j);
                               *(p+j)=temp;
                        }

                }

        }

}

int main()
{
    int n,i;
    printf("enter number of element : " );
    scanf("%d",&n);
    int a[n];

    for(i=0; i<n; i++)
        {
                   scanf("%d",a+i);

        }
        sort(a,n);

    printf("\n");


    for(i=0; i<n; i++)
        printf("%d\n",*(a+i));

    return 0;

}


