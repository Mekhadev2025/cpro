//** program to find the reverse of each word in  string **//
#include <stdio.h>
#include <string.h>
 
 int strilen(char s[])
 {
  int i=0;
  while(s[i]!='\0')
  {
        i++;
   }
return i;
}
void strirev(char st[])
{
int i,j,len;
char ch;
j=len=strilen(st)-1;
i=0;
while(i<j)
{
  ch=st[j];
  st[j]=st[i];
  st[i]=ch;
  i++;
  j--;
  }
  
}
int main()
{  char org[]="taj Mahal is one of the seven wonders ";
;printf("Enter the string ");
 
char reverse[100]="";
char temp[50];
 int i,j,n;
 n = strilen(org);
for(i = 0; i < n; i++) 
{
   for(j = 0; i < n && org[i]!=' '; ++i,++j) 
   {
     temp[j] =org[i];
   }
      temp[j] = '\0';
      strirev(temp);
      strcat(reverse, temp);
      strcat(reverse, " ");
   }
   
 printf("Original - %s\n",org);
   printf("Reversed - %s\n",reverse);
   
   return 0;
}




 
