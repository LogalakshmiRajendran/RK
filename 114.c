#include<stdio.h>
int main()
{
    int a[9],n,k,i,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if((a[i]%2)==0)
        {
            b++;
        }
    if(b==k)
    printf("%d",a[i]);
}
return 0;
}
