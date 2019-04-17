#include<iostream>

using namespace std;

int main()
{
	int n[1000];
	int count = 0;
	for(int i=0;; i++)
	{
		cin >> n[i];
		if(cin.get() == '\n')
		{
			break;
		}
		count++;
	}

	if(count == 1 & n[count] == 0)
	{
		//Áã¶àÏîÊ½
		cout << "0 0";
	}
	else
	{
		if(n[count] != 0)
		{
			for(int i=0; i<count+1; i=i+2)
			{
				if(i+1 != count)
				{
					cout << n[i]*n[i+1] << " " << n[i+1]-1 << " ";
				}
				else
				{
					cout << n[i]*n[i+1] << " " << n[i+1]-1;
				}

			}
		}
		else
		{
			for(int i=0; i<count-1; i=i+2)
			{
				if(i+1 != count-2)
				{
					cout << n[i]*n[i+1] << " " << n[i+1]-1 << " ";
				}
				else
				{
					cout << n[i]*n[i+1] << " " << n[i+1]-1;
				}

			}
		}
	}



	return 0;
}
