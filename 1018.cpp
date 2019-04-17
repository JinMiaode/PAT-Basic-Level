#include<iostream>
#include<string>
using namespace std;

int win(string a,string b)
{
	if((a[0] == 'C' && b[0] == 'J') || (a[0] == 'J' && b[0] == 'B') || (a[0] == 'B' && b[0] == 'C'))
	{
		return 1;
	}

	if((a[0] == 'B' && b[0] == 'J') || (a[0] == 'C' && b[0] == 'B') || (a[0] == 'J' && b[0] == 'C'))
	{
		return -1;
	}

	return 0;
}

string str(string str1)
{
	int c = 0;
	int j = 0;
	int b = 0;
	for( int i=0; i<str1.length(); i++)
	{
		if(str1[i] == 'C')
		{
			c++;
		}
		if(str1[i] == 'J')
		{
			j++;
		}
		if(str1[i] == 'B')
		{
			b++;
		}
	}
	if(b >= c && b >= j )
	{
		return "B";
	}
	else if(c >= j)
	{
		return "C";
	}
	else
	{
		return "J";
	}
}

int main()
{
	int n;
	cin >> n;
	int p1 = 0;
	int p2 = 0;
	int p3 = 0;
	string str1,str2;
	for(int i=0; i<n; i++)
	{
		string a,b;
		cin >> a >> b;
		int re = win(a,b);
		if(re == 1)
		{
			p1++;
			str1.append(a);
		}
		else if(re == 0)
		{
			p2++;
		}
		else
		{
			p3++;
			str2.append(b);
		}
	}

	cout << p1 << " " << p2 << " " << p3 << endl;
	cout << p3 << " " << p2 << " " << p1 << endl;
	string p = str(str1);
	string q = str(str2);
	cout << p << " " << q << endl;
	return 0;
}
