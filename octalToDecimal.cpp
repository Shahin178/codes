#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	cout<<"Octal to decimal:"<<endl;
	int a,last,dec=0,i=0;
	cout<<"Enter a octal number: ";
	cin>>a;
	while(a>0)
	{
		last=a%10;
		dec=dec+last*pow(8,i);
		a=a/10;
		i++;
	}
	cout<<"Decimal equivalent is: "<<dec<<endl;
}
