#include<iostream>
using namespace std;

int main()
{
	int i=1,r,a;
	char hex[100];
	cout<<"Decimal to Hexadecimal:"<<endl;
	cout<<"Enter a Decimal number: ";
	cin>>a;
	
	while(a!=0)
	{
		r=a%16;
		if(r<10)
		{
			hex[i++]=r+48;	
		}
		else
		{
			hex[i++]=r+55;
		}
		a=a/16;
	}
	cout<<"Hexadecimal Equivalent is: ";
	for(int j=1;j>0;j--)
	{
		cout<<hex[j];
	}
}
