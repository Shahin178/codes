#include<iostream>
using namespace std;

int main()
{
	string hex;
	int dec,base=1;
	cout<<"Hexadecimal to Decimal:"<<endl;
	cout<<"Enter a Hexadecimal number: ";
	cin>>hex;
	int len=hex.size();
	for(int i=len-1;i>=0;i--)
	{
		if(hex[i]>='0' && hex[i]<='9')
		{
			dec+=(int(hex[i])-48)*base;
			base=base*16;
		}
		else if(hex[i]>='A' && hex[i]<='F')
		{
			dec+=(int(hex[i])-55)*base;
			base=base*16;
		}
	}
	

	cout<<"Decimal Equivalent is: "<<dec<<endl;
	
}
