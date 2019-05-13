#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Enter a number to check whther it is positive or negative or zero:");
scanf("%d",&a);
if(a>0)
printf("%d is positive",a);
else if(a<0)
printf("%d is negative",a);
else
printf("%d is zero",a);
getch();
}
