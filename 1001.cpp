#include<iostream>
using namespace std;

int main()
{
	int i = 0;
	int n;
	cin >> n;
	while( n != 1)
	{
		if ( n%2 == 0)
		{
			n = n/2;
		}
		else
		{
			n = (3*n+1)/2;
		}
		i = i+1;
	}
	cout << i << endl;

	
	return 0;
} 
