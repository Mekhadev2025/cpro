#include <stdio.h>
int main() 
{
int n,m=0,r;

printf("Enter a 3 digit number");
scanf("%d",&n);

while(n!=0)
{
r =n%10;
m= m+ r*r*r;
n=n/10;
}

if (r==n)
printf("%d is an armstrong number",n);
 else
printf("%d is not an armstrong number",n);

}
