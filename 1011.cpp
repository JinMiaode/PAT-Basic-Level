#include<iostream>
bool fun(long int A,long int B,long int C);//数据精度，A、B相加之后超过int范围 

using namespace std;

int main()
{
	int n;
	cin >> n;
	long int A[n],B[n],C[n];
	for(int i=0; i<n; i++)
	{
		cin >> A[i] >> B[i] >> C[i];			
	}
	for(int i=0; i<n; i++)
	{
		bool flag = fun(A[i],B[i],C[i]);
		if(flag)
		{
			cout << "Case" << " " << "#" << i+1 << ":" << " " << "true" << endl;
		} 
		else
		{
			cout << "Case" << " " << "#" << i+1 << ":" << " " << "false" << endl;
		}
		 
	}
	
	return 0;
}

bool fun(long int A,long int B,long int C)
{
	if(A+B>C)
	{
		return true;
	}
	return false;
	return 0;
}

 
