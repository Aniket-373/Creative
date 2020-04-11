#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> arr;
	cout <<"Enter the size of array  :   ";
	int count;
	cin >> count;
	arr.resize(count);
	cout << arr.size();
}