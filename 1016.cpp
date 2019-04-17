#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string A,B;
	int a,b;
	int pa = 0;
	int pb = 0;
	cin >> A >> a >> B >> b;
	for(int i=0; i<A.length(); i++)
	{
		if(a == A[i] - '0')
		{
			pa = pa*10 + a;
		}	
	}
	for(int i=0; i<B.length(); i++)
	{
		if(b == B[i] - '0')
		{
			pb = pb*10 + b;
		}	
	}
	cout << pa+pb << endl;
	return 0;
}
