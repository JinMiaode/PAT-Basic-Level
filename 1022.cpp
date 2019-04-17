#include<iostream> 
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	int A;
	int B;
	int D;
	cin >> A >> B >> D;
	int C = A+B;
	string R; //采用数组好一点，int R[100]; 
	int r;

	while(C >= D)
	{
		r = C%D;
		stringstream ss;
		ss << r;
		string str;
		ss >> str;
		R.insert(0,str);
		C = C/D;
	}
	stringstream ss;
	ss << C;
	string str;
	ss >> str;
	R.insert(0,str);
	cout << R;
	return 0;
}
