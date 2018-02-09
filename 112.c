#include<stdio.h>
int main()
{
int n,k,i,a[8];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(a[i]==k)
{
printf("exist array is%d",k);
return(0);
}
}
printf("not exist");
}
