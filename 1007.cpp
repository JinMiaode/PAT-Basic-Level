#include<iostream>
#include<cmath> 
using namespace std;
bool prime(int n);
//1不是素数 
int main()
{
	int n;
	cin >> n;
	int count = 0;
	for(int i=2; i<n+1; i++)
	{
		bool first = prime(i);
		if(i+2 < n+1)
		{
			bool second = prime(i+2);
			if(first & second)
			{
				count++;
			}
		}		
	}
	cout << count;
	return 0;
}


bool prime(int n)
{
	if(n == 1 || n == 2)
	{
		return true;
	}
	else
	{
		for(int i=2; i<=sqrt(n); i++) //运行超时 
		{
			if(n%i == 0)
			{
			    return false;
			}
		}
		return true;
	}
	return 0;
}
