#include<stdio.h>
int main()
{
int ye;
printf("enter the year");
scanf("%d",&ye);
if(ye%4==0)&&(ye%100==0)||(ye%400==0)
{
printf("%d,is a leap year",ye);
}
else
{
printf("%d,is not a leap year",ye);
}
return 0;
}
