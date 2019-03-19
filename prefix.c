#include<stdio.h>
#include<string.h>
void prefix(char x1[], char x2[])
{
char x3[254];
int a=0;
int b=0;
int c=0;
a=strlen(x1);
b=strlen(x2);
int i;
if(a<b)
{
c=a;
}
else
{
c=b;
}
for(i=0;i<c;++i)
{
if(x1[i]==x2[i])
{
x3[i]=x1[i];
}
else break;
}
printf("%s\n",x3);
}
int main(void)
{
char x1[254];
char x2[254];
int i;
for(i=0;i<1;i++)
{
scanf("%s%s",x1,x2);
x1[strlen(x1)-1]='\0';
x2[strlen(x2)-1]='\0';
prefix(x1,x2);
}
return 0;
}
