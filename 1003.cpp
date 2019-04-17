#include<iostream>
#include<string>
using namespace std;
bool fun1(string str);
bool fun2(string str);

int main()
{
	int n;
	cin >> n;
	string str[n];
	for( int i=0; i<n; i++)
	{
		cin >> str[i];
		
	}
	
	for( int i=0; i<n; i++)
	{
		bool first = fun1(str[i]);
		bool second = fun2(str[i]);
		
		if(first || second)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}

bool fun1(string str)
{
	int i = 0;
	string str1,str2;
	while(str[i] == 'A')
	{
		str1 += 'A';
		i++;
	}
	if(str[i] != 'P' || str[i+1] != 'A' || str[i+2] != 'T')
	{
		return false;
	}
	else
	{
		i += 3;
		while(str[i] == 'A')
	{
		str2 += 'A';
		i++;
	}
	}
	if(str1.length() == str2.length())
	{
		return true;
	}
	else
	{
		return false;
	}
	return 0;
}

bool fun2(string str)
{
	int i = 0;
	string str1,str2,str3;
	while(str[i] == 'A')
	{
		str1 += 'A';
		i++;
	}
	
	if(str[i] != 'P')
	{
		return false;
	}
	
	i++;
	if(str[i] != 'A')
	{
		return false;
	}
	while(str[i] == 'A')
	{
		str2 += 'A';
		i++;
	}
	
	if(str[i] != 'T')
	{
		return false;
	}
	
	i++;
	while(str[i] == 'A')
	{
		str3 += 'A';
		i++;
	}
	
	if(str3.length() == str1.length()*str2.length())
	{
		return true;
	}
	return 0;
}
