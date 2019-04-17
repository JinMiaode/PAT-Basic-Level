#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a;
	vector<int> num;
	for(int i=0; i<10; i++)
	{
		cin >> a;
		for(int j=0; j<a; j++)
		{
			num.push_back(i);
		}	
	}
	if(num.front() == 0)
	{
		for(int i=0; ;i++)
		{
			if(num[i] != 0)
			{
				int temp = 0;
				temp = num[0];
				num[0] = num[i];
				num[i] = temp;
				break;
			}
		}
	}
	for(int i=0; i<num.size(); i++)
	{
		cout << num[i];
	}
	
	return 0;
	
} 
