#include<iostream.h>
#include<conio.h>
void main()
{
	int a;
	cout<<"Enter a number to check whether it is odd or even:";
	cin>>a;
	if(a<0)
	cout<<"Inavlid";
	else if(a%2==0)
	cout<<a <<" is Even";
	else 
	cout<<a<<" is Odd";
}
	
