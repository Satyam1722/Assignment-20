#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number of element : " );
    scanf("%d",&n);
    int a[n];
     //input by using pointer
    for(i=0; i<n; i++)
        {
                   scanf("%d",a+i);

        }


    printf("\n");
   //display by using pointer

    for(i=0; i<n; i++)
        printf("%d ",*(a+i));

    return 0;

}
