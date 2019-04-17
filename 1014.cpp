#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a,b,c,d;
	int day;
	int flag = 1;
	int hour;
	cin >> a >> b >> c >> d;
	string week[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int min1 = a.length()<b.length() ? a.length() : b.length();
	int min2 = c.length()<d.length() ? c.length() : d.length();
	for(int i=0; i<min1; i++)
	{
		if(a[i] == b[i] && a[i] >= 'A' && a[i] <= 'G' && flag == 1)
		{
			flag = 0;
			day = a[i] - 'A';
			cout << week[day] << " ";
			continue;
		}
		if(flag == 0 && a[i] == b[i])
		{
			if(a[i] >= '0' && a[i] <= '9')
			{
				hour = a[i] - '0';
				cout << "0" << hour << ":";
				break;
			}
			if(a[i] >= 'A' && a[i] <= 'N')
			{
				hour = a[i] - 'A' + 10;
				cout << hour << ":";
				break;
			}

		}
	}

	for(int i=0; i<min2; i++)
	{
		if(c[i] == d[i])
		{
			if((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z'))
			{
				if(i < 10)
				{
					cout << "0" << i;
				}

				else
				{
					cout << i;
				}
				break;
			}

		}
	}
	return 0;
}
