#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch;
cout<<"Enter a character:";
cin>>ch;
if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
cout<<"vowel";
else if(ch>='a' && ch<='z'|| ch>='A'&&ch<='Z')
cout<<"Consonants";
else
cout<<"Invalid";
}
	
