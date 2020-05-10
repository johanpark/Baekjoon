#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int* arr = new int[a];
	int* dp = new int[a];
	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}
	dp[0] = arr[0];
	int ans = dp[0];
	for (int j = 0; j < a; j++)
	{
		dp[j] = max(arr[j], dp[j-1] + arr[j]);
		ans = max(ans, dp[j]);
	}
	cout << ans;

	return 0;
}