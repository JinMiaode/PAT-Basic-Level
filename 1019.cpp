#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>

using namespace std;

bool cmp(char a,char b)
{
	return a>b;
}

int main()
{
	string n;
	cin >> n;
	if(n.length() < 4)
	{
		n.resize(4,'0');
	}
	if(n == "6174")
	{
		cout << 7641 << " " << "-" << " " << 1467 << " " << "=" << " " << n << endl;
	}

	
	if( n[0] == n[1] && n[0] == n[2] && n[0] == n[3])
	{
		cout << n << " " << "-" << " " << n << " " << "=" << " " << "0000" << endl;
	}

	else
	{
		while( n != "6174")
		{
			string p = n;
			sort(p.begin(),p.end(),cmp);
			string q = n;
			sort(q.begin(),q.end());
			int p1 = atoi(p.c_str());
			int q1 = atoi(q.c_str());
			int n1;
			n1 = p1 - q1;
			stringstream ss;
			ss << n1;
			ss >> n;
			if(n.length() < 4)
			{
				n = "0" +n;
			}
			cout << p << " " << "-" << " " << q << " " << "=" << " " << n << endl;
		}
	}

	return 0;
}
