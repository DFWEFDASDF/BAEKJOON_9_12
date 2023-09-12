#include <iostream>
#include <algorithm>

#define MAX 1000000
using namespace std;


int DP[MAX] = { 0 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	cin >> N;

	for (int i = 2; i <= N; ++i)
	{
		DP[i] = DP[i - 1] + 1;

		if (i % 2 == 0)
		{
			DP[i] = min(DP[i], DP[i / 2] + 1);
		}
		
		if (i % 3 == 0)
		{
			DP[i] = min(DP[i], DP[i / 3] + 1);
		}

	}

	cout << DP[N] << endl;

	return 0;
}