#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;

int main()
{
	string A;
	int B;
	string Q;
	int R;
	cin >> A >> B;
	int P1 = 0;

	for( int i=0; i<A.length(); i++)
	{
		int Q1 = 0;
		Q1 =(P1*10 + (A[i] - '0'))/B;
		stringstream ss;
		string str;
		ss << Q1;
		ss >> str;
		Q.append(str);
		P1 =(P1*10 + (A[i] - '0'))  - Q1*B;
	}
	
	if(Q[0] == '0')
	{
		Q.erase(0,1);
	}
	if(Q.length() != 0)
	{
		cout << Q << " " << P1 << endl;
	}
	else
	{
		cout << 0 << " " << P1 << endl;
	}


	
	return 0;
}
