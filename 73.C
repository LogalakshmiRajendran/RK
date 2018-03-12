#include<stdio.h>

int main() {
    int i,k,l,n,c=0;
   scanf("%d",&n);
   scanf("%d",&k);
   scanf("%d",&l);
   for(i=k;i<l;i++)
   {
       if(i==n)
       c++;
   }
   if(c==1)
   printf("yes");
   else
   printf("no");
}
