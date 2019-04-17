#include<iostream>
#include<vector>
#include<cmath>
#include<iomanip> //保留一位小数 
using namespace std;

int main()
{
	vector<int> a;
	for(int i=0;; i++)
	{
		int temp = 0;
		cin >> temp;
		a.push_back(temp);
		if(cin.get() == '\n')
		{
			break;
		}
	}
	
	int sum1 = 0;
	int sign2 = 0;
	int sum2 = 0;
	int count3 = 0;
	double sum4 =0.0;
	int count4 = 0;
	int max5 = 0;
	
	for(int i=1; i<a.size(); i++)
	{
		if(a[i]%5 == 0 & a[i]%2 == 0)
		{
			sum1 += a[i];	
		}
		if(a[i]%5 == 1)
		{
			sum2 += pow(-1,sign2)*a[i];
			sign2++;
		}
		if(a[i]%5 == 2)
		{
			count3++;
		}
		if(a[i]%5 == 3)
		{
			sum4 += a[i];
			count4++;
		}
		if(a[i]%5 == 4)
		{
			if(a[i] > max5)
			{
				max5 = a[i];
			}
		}	
	}
	
	if(sum1 == 0)
	{
		cout << "N" << " ";
	}
	else
	{
		cout << sum1 << " ";
	}
	
	if(sign2 == 0)
	{
		cout << "N" << " ";
	}
	else
	{
		cout << sum2 << " ";
	}
	
	if(count3 == 0)
	{
		cout << "N" << " ";
	}
	else
	{
		cout << count3 << " ";
	}
	
	if(count4 == 0)
	{
		cout << "N" << " ";
	}
	else
	{
		cout << setiosflags(ios::fixed) << setprecision(1) << sum4/count4 << " ";
	}
	
	if(max5 == 0)
	{
		cout << "N";
	}
	else
	{
		cout << max5;
	}

	return 0;
} 
