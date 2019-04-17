#include<iostream>
using namespace std;
void sort( int n[],int k);

int main()
{
	int n;
	cin >> n;
	int s[n];
	for( int i=0; i<n; i++)
	{
		cin >> s[i];	
	}
	
	for( int i=0; i<n; i++)
	{
		int num = s[i];
		if(num == 0)
		{
			continue;
		}
		while(num != 1)
		{
			if(num%2 != 0)
			{
				num = 3*num+1;
			}
			num = num/2;
			for(int j=0; j<n; j++)
			{
				if(s[j] == num)
				{
					s[j] = 0;
					break;
				}
			}
		}
	}
	
	sort(s,n);
	for(int i=0; s[i]>0 ; i++)
	{
		cout << s[i] ;
		if(s[i+1] > 0)
		{
			cout << " ";
		}
	}
	return 0;
}

void sort( int n[],int k)
{
	int temp;
	for(int i=0; i<k; i++)
	{
		for(int j=i+1; j<k; j++)
		{
			if(n[i] < n[j])
			{
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}	
}

