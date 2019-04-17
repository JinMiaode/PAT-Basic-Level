#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string n;
	cin >> n;
	int s[10] = {0};
	for( int i=0; i<n.length(); i++)
	{
		for( int j=0; j<10; j++)
		{
			if(n[i]-'0' == j)
			{
				s[j]++;
			}
		}
	}
	
	for( int j=0; j<10; j++)
	{
		if(s[j] != 0)
		{
			cout << j << ":" << s[j] << endl;
		}
	}
	return 0;
} 
