#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n);

int main()
{
	int m,n;
	cin >> m ;
	cin >> n ;
	int count = 0;
	int num = 0;
	for(int i = 2; count < n; i++)
	{
		bool fun = isprime(i);
		if(fun)
		{
			count++;
			if(count >= m)
			{
				cout << i;
				num++;
				if(count != n)
				{
					if(num%10 == 0)
					{
						cout << '\n';
					}
					else
					{
						cout << " ";
					}
				}
			}
		}
	}
	return 0;
}


bool isprime(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n%i == 0)
		{
			return false;
		}
	}
	return true;

}
