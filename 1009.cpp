#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str[80];
	int count = 0;
	for(int i=0;;i++)
	{
		cin >> str[i];
		count++;
		if(cin.get() == '\n')
		{
			break;
		}
	}
	
	for(int j=count-1; j>-1; j--)
	{
		cout << str[j];
		if(j != 0)
		{
			cout << " ";
		}
	}
	return 0;

} 
