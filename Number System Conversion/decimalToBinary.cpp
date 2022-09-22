#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a,dig,bin=0,pro=1;
	cout<<"Decimal to Binary"<<endl;
	cout<<"Enter a decimal number:";
	cin>>a;
	while(a>0)
	{
		dig=a%2;
		bin=bin+(dig*pro);
		a=a/2;
		pro*=10;
	}
	cout<<"Binary equivalent is: "<<bin<<endl;
}
