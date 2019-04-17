#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct
	{
		int num;
		int de;
		int cai;
		int sum; 
	}Student;
bool cmp(Student stu1,Student stu2);

int main()
{
	int N,L,H;
	Student s;
	vector<Student> a1;
	vector<Student> a2;
	vector<Student> a3;
	vector<Student> a4;
	
	cin >> N >> L >> H;
	for(int i=0; i<N; i++)
	{
		cin >> s.num >> s.de >> s.cai;
		s.sum = s.de + s.cai;
		if(s.de >= H && s.cai >= H)
		{
			a1.push_back(s);
		}
		else if(s.de >= H && s.cai >= L)
		{
			a2.push_back(s);
		}
		else if(s.de >= L && s.cai >= L && s.de >= s.cai)
		{
			a3.push_back(s);
		}
		else if(s.de >= L && s.cai >= L)
		{
			a4.push_back(s);
		}
	}
	sort(a1.begin(),a1.end(),cmp);	
	sort(a2.begin(),a2.end(),cmp);
	sort(a3.begin(),a3.end(),cmp);
	sort(a4.begin(),a4.end(),cmp);
	cout << a1.size()+a2.size()+a3.size()+a4.size() << endl;
	for(int i=0; i<a1.size(); i++)
	{
		cout << a1[i].num << " " << a1[i].de << " " << a1[i].cai << endl;
	}
	for(int i=0; i<a2.size(); i++)
	{
		cout << a2[i].num << " " << a2[i].de << " " << a2[i].cai << endl;
	}
	for(int i=0; i<a3.size(); i++)
	{
		cout << a3[i].num << " " << a3[i].de << " " << a3[i].cai  << endl;
	}
	for(int i=0; i<a4.size(); i++)
	{
		cout << a4[i].num << " " << a4[i].de << " " << a4[i].cai << endl;
	}
	return 0;
}

bool cmp(Student stu1,Student stu2)
{
	if(stu1.sum != stu2.sum)
	{
		return stu1.sum > stu2.sum;
	}
	else if(stu1.de != stu2.de)
	{
		return stu1.de > stu2.de;
	}
	else
	{
		return stu1.num < stu2.num;
	}
	
}
