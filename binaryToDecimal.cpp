#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	cout<<"Binary to decimal:"<<endl;
	int a,last,dec=0,i=0;
	cout<<"Enter a binary number: ";
	cin>>a;
	while(a>0)
	{
		last=a%10;
		dec=dec+last*pow(2,i);
		a=a/10;
		i++;
	}
	cout<<"Decimal equivalent is: "<<dec<<endl;
}
