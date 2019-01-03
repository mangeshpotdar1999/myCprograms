#include<stdio.h>

void main()
{
int a[100],n,i,mini,s,d;
printf("Enter Length of an array");
scanf("%d",&n);
printf("Enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
s=min(a,n);
d=max(a,n);
printf("Minimum element is %d",s);
printf("\nMaximum element is %d",d);
}

int min(int a[],int n)
{
int mini,i;
mini=a[0];
for(i=0;i<n;i++)
{
if(mini>a[i])
{
mini=a[i];
}
}
return mini;
}

int max(int a[],int n)
{
int maxi,i;
maxi=a[0];
for(i=0;i<n;i++)
{
if(maxi<a[i])
{
maxi=a[i];
}
}
return maxi;
}

