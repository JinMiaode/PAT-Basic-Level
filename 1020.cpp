#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

typedef struct
{
	double num; //第二个测试点库存的数据不一定是整数 
	double price;
	double unitprice;
}Cake;

bool cmp(Cake c1,Cake c2)
{
	return c1.unitprice > c2.unitprice;	
}

int main()
{
	int N;
	int D;
	cin >> N >> D;
	Cake C[N];
	for( int i=0; i<N; i++)
	{
		
		cin >> C[i].num; 
	}
	for( int i=0; i<N; i++)
	{
		cin >> C[i].price;
		C[i].unitprice = C[i].price/C[i].num;
	}
	sort(C,C+N,cmp);
	
	int d;
	int d1 = 0;
	double P = 0;
	int i;
	for( i=0; i<N; i++)
	{
		d = d1;
		d1 = d1 + C[i].num;
		if(d1 > D)
		{
			P = P + (D-d)*C[i].unitprice;
			break;
		}
		P = P + C[i].price;
	}
	
	cout << setiosflags(ios::fixed) << setprecision(2) << P << endl;
	return 0;
	
} 
