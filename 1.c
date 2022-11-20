#include<stdio.h>
void swap(int *a,int *b){
 int temp=*a;
 *a=*b;
 *b=temp;
}

int main(){
 int a,b;
 printf("enter two numbers : ");
 scanf("%d%d",&a,&b);
 printf("\nbefore swapping \na=%d  b=%d\n",a,b);
 swap(&a,&b);
 printf("\nafter swapping \na=%d  b=%d\n",a,b);
 return 0;

}
