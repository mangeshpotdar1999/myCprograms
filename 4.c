//Call by Value Program

#include<stdio.h>

void main()
{
int a,b;
printf("Enter the value of a and b");
scanf("%d%d",&a,&b);
printf(" before swapping \na=%d \nb=%d",a,b);
swap(a,b);
}

void swap(int a,int b)
{
int t;
t=a;
a=b;
b=t;
printf("\nAfter swapping \na=%d \nb=%d",a,b);
}
