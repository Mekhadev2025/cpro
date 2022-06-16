#include<stdio.h>
int main()
{
int i,a,b,c;
a=0;
b=1;
printf("1, ");
for(i=1;1<=1000;i++)
{
c=a+b;
a=b;
b=c;
if(c>=100)
break;
printf("%d, ",c);

}
}
