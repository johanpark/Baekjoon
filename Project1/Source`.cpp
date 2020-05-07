#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int* arr = new int[a];
	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}
	int best = 0, sum = 0;
	for (int j = 0; j < a; j++)
	{
		sum = max(arr[j], sum + arr[j]);
		best = max(best, sum);
	}
	cout << best;
}