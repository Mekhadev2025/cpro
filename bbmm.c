#include<stdio.h>
int main()
{
int n;
for(n=1;n<30000;n++)
{
if(n%1==0 &&   n%2==0 &&  n%3==0 &&  n%4==0 &&  n%5==0 &&  n%7==0 &&  n%8==0 && n%9==0 &&  n%10==0 )
printf("%d\n",n);
}
return 0;
}
