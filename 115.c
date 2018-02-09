#include<stdio.h>
int main()
{
    int a[9],n,k,i,b,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            b=a[i];
            a[i]=a[j];
            a[j]=b;
        }
}
    printf("%d",a[k]);
return 0;
}
