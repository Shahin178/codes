#include<iostream>
using namespace std;

int main()
{
	int a,pro=1,oct=0,dig;
	cout<<"Decimal to Octal:"<<endl;
	cout<<"Enter a Decimal number: ";
	cin>>a;
	while(a>0)
	{
		dig=a%8;
		oct=oct+(dig*pro);
		a=a/8;
		pro*=10;
	}
	cout<<"Octal Equivalent is: "<<oct<<endl;
}
