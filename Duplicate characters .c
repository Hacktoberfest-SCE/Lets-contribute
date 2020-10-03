#this program is to find duplicate characters in a string
#include<stdio.h>
#include<string.h>
int main()
{
int i,j,len,v=1;
char str[100];
printf("enter string");
scanf("%[^\n]%*c,str);
len=strlen(str);
printf("Duplicate characters:');
for(i=0;i<len;i++)
{
for(j=i+1;j<len;j++)
{
if(str[i]==str[j])
{
if(v==1 && str[j]!='\0')
{
printf("%c",str[i]);
}
str[j]='\0';
v++;
}
}
v=1;:
}
return 0;
}
