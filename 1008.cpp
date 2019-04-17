#include<iostream>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	int array[n];
	for(int i=0; i<n; i++)
	{
		cin >> array[i];
	}
	m = m%n; //1,2²âÊÔµã 
	for(int i=n-m; i<n; i++)
	{
		cout << array[i] << " ";
	}
	
	for(int i=0; i<n-m; i++)
	{
		cout << array[i];
		if(i != n-m-1)
		{
			cout << " ";
		}
	}
	return 0;
}
