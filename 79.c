#include <stdio.h>
#include<math.h>
int main(void) {
int a,b,c,d;
scanf("%d%d",&a,&b);
c=a*b;
d=sqrt(c);

if(c==d*d)
printf("Yes");
else
printf("No");
	return 0;
}
