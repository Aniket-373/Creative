#include <iostream>
#include <vector>
using namespace std;
int sh(int a[], int val,int max)
{
	int i = 0;
	while (i != max - 1)
	{
		if (a[i] == val)
		{
			cout << "Search is successful "
				 << endl;
			return i;
			break;
		}
		else
		{
			i++;
		}
	}
}

int main()
{
	int max;
	int low, high, mid, srch;
	int  a[10];
	cout << "Enter the size of array  :   ";
	cin >> max;
	
	cout << endl
		 << "Enter " << max << " data Elements : " << endl;
	for (int i = 0; i <= max - 1; i++)
	{
		cin >> a[i];
	}
	cout << "Enter the element to search  :  ";
	cin >> srch;

	int data = sh(a, srch,max);
	cout << endl
		 << "The value is at " << data << "position";

	return 0;
}
