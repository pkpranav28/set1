#include<iostream.h>
#include<conio.h>
void main()
{
	int a,var,count=0;
	cout<<"Enter a value:";
	cin>>a;
	var=a;
	while(a>0)
	{
		a=a/10;
		count++;
	}
	cout<<"Number of digits in "<<var<<" is "<<count;
}
