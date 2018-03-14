#include<stdio.h>
int main(void)
{
	int a,i;
	printf("enter the number");
	scanf("%d",&a);
	printf("the factor numbers are");
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			printf("%d",i);
		}
	}
	return 0;
	
}
