#include<conio.h>
#include<stdio.h>
int main()
{
int n1,n2,i,temp,sum=0;rem,cube;
printf("enter the intervals:");
scanf("%d %d",&n1,&n2);
for(i=n1+1;i<n2;++i)
{
temp=i;
while(i!=0)
{
rem=temp%10;
cube=pow(rem,3);
sum=sum+cube;
temp/=10;
}
if(sum==i)
{
printf("%d ",i);
}}
return 0;
}

