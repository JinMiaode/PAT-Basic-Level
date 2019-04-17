#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char pinyin[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char n[100];
	cin >> n;
	int length = strlen(n);
	int sum = 0;
	for(int i=0;i<length;i++)
	{
		sum += n[i]-'0';
	}
	
	int i = 0;
	int a[100];
	while( sum != 0)
	{
		a[i] = sum%10;
		sum = sum/10;
		i++;	
	}
	
	if( i>0 )
	{
		for(int j=i-1;j>0;j--)
		{
			cout << pinyin[a[j]] << " ";		
		}
		cout << pinyin[a[0]];
	}
	
	else
	{
		cout << "ling";
	}
	return 0;
}
