#include<stdio.h>
void swap(char *a,char *b){
 char temp[100];
 strcpy(temp,a);
 strcpy(a,b);
 strcpy(b,temp);
}

int main(){
 char a[100],b[100];
 printf("enter 1 strings : ");
 fflush(stdin);
 fgets(a,100,stdin);
 printf("enter 2 strings : ");
 fflush(stdin);
 fgets(b,100,stdin);
 a[strlen(a)-1]='\0';
 b[strlen(b)-1]='\0';
 printf("\nbefore swapping \na=%s  b=%s\n",a,b);
 swap(a,b);
 printf("\nafter swapping \na=%s  b=%s\n",a,b);
 return 0;

}

