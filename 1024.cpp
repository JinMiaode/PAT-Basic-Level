#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	string A;
	cin >> A;
	if(A[0] == '-')
	{
		cout << '-';
	}
	
	A.erase(0,1); //移除正负号 
	if(A[1] == '.')
	{
		A.erase(1,1); //移除小数点 
	}
	
	int Eloc = A.find('E');
	string B;
	B = A.substr(Eloc+2);
	int b;
	stringstream ss;
	ss << B;
	ss >> b;
	string C;
	C = A.substr(0,Eloc);
	if(A[Eloc+1] == '-')
	{
		for(int i=0; i<b; i++)
		{
			C.insert(0,"0");
		}
		C.insert(1,".");	
	}
	else
	{
		if(b >= C.size()-1)
		{
			C.resize(b+1,'0');
		}
		else
		{
			C.insert(b+1,"."); //测试点4 
		} 	
	}
	cout << C;
	
	return 0;	
}
