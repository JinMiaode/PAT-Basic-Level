#include<iostream>
#include<string> 
using namespace std;

int main()
{
	int n;
	cin >> n;
	string str;
	while(n>=100)
	{
		n = n-100;
		str += 'B';
	}
	
	while(n>=10)
	{
		n = n-10;
		str += 'S';
	}
	
	if(n>0)
	{
		for(int i=1; i<n+1; i++)
		str += i+'0';
	}
	
	cout << str;
	return 0;
}
