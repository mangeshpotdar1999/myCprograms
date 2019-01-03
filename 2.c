#include<stdio.h>

void main()
{
char a[20],i;
int b;
printf("Enter string");
scanf("%s",&a);
b=length(a);
printf("Length of string is %d",b);
}

int length(char a[20])
{
int i;
for(i=0;i<a[i]!='\0';i++)
{
i++;
}
return i;
}


