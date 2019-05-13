#include<iostream.h>
#include<conio.h>
void main()
{
	int year;
	cout<<"Enter a year:";
	cin>>year;
	if(year%4==0)
	cout<<year<<" is leap year";
	else if(year%4==1)
	cout<<year<<" is not a leap year";
	else
	cout<<"Invalid";
}
