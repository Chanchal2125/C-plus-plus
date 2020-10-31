#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}
int main()
{
	int t;
	cin >> t;
	for(int g=0;g<t;g++)
	{
		int length,breadth;
		cin >> length >> breadth;
		int area=length*breadth;
		int large=gcd(length,breadth);
		cout << area/(large*large)<<endl;
	}
	return 0;
}
