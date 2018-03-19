#include<stdio.h>
void main()
{
    int a,b;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        if(b%2==0)
        {
            printf("");
        }
        else
        printf("%d ",b);
        a=a/10;
    }

}
