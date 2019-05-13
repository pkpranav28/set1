#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	cout<<"Enter a number to sum upto n:";
	cin>>n;
	if(n>0)
	{
	for(i=0;i<=n;i++)
	sum=sum+i;
	cout<<"Sum of"<<n<<" is:"<<sum;
	}
	else
	cout<<"Invalid";
}
