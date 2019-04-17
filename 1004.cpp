#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	typedef struct
	{
		string name;
		string number;
		int score;
	}Student;
	
	Student s,s1,s2;
	s1.score = 101;
    s2.score = -1;
    
	for( int i=0; i<n ; i++)
	{
		cin >> s.name >> s.number >> s.score;
		if(s.score < s1.score)
		{
			s1 = s;
		}
		if(s.score > s2.score)
		{
			s2 = s;
		}
		
	}
	
	cout << s2.name << " " << s2.number << endl;
	cout << s1.name << " " << s1.number << endl;
	return 0;
}
