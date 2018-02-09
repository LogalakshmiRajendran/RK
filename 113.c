#include<stdio.h>

int main()
{
int a[100],n,i,k,flag=0;
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(a[i]==k)
	{
		flag++;
	}
}

printf("%d",count);
	return(0);	
}
