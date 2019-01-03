//Call by Reference (address)

#include<stdio.h>

void main()
{
int a,b;
printf("Enter the value of a and b");
scanf("%d%d",&a,&b);
printf("before swapping \na=%d \nb=%d",a,b);
swap(&a,&b);
printf("\nAfter swapping \na=%d \nb=%d",a,b);
}

int swap(int *i,int *j)
{
int t;
t=*i;
*i=*j;
*j=t;
return &i,&j;
}
