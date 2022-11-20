int main()
{
    int n,i,sum=0;
    printf("enter number of element : " );
    scanf("%d",&n);
    int a[n];

    for(i=0; i<n; i++)
        {
            scanf("%d",a+i);

        }


    printf("\n");


    for(i=0; i<n; i++)
        sum+=a[i];

    printf("sum : %d",sum);

    return 0;

}

