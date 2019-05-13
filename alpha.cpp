#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char alpha;
	cout<<"Enter a character to check whether it is an alphabet or not:";
	cin>>alpha;
	if((alpha>='a' && alpha<='z')||(alpha>='A' && alpha<='Z'))
	cout<<"Alphabet";
	else
	cout<<"Not an Alphabet";
}
