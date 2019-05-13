#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10],sum=0,i,n,k;
	cout<<"Enter the limit of array:";
	cin>>n;
	if(n>0)
	{
	cout<<"Enter the array values:\n";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	cout<<"\nValues are:"<<a[i];
	}
	cout<<"\nEnter the size to sum k values:";
	cin>>k;
	for(i=0;i<k;i++)
	sum=sum+a[i];
	cout<<"\nsum of first "<<k<<" values are "<<sum;
	}
	else
	cout<<"Invalid";
}
