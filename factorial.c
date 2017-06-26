#include<conio.h>
#include<stdio.h>
int main()
{
int n,factoial,i;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
factorial=1;
factorial=factorial*i;
}
printf("the factorial number is : %d",factorial);
if(n==0)
printf("the factorial is 1");
else
printf("give the valuable input");
return 0;
}
