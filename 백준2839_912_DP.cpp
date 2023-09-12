#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int q = N / 5;
	int r = N % 5;
	
	while (true)
	{
		if (q == 0 && r % 3 != 0)
		{
			cout << -1 << endl;
			break;
		}

		if (r % 3 == 0)
		{
			cout << q + r / 3 << endl;
			break;
		}
		else
		{
			--q;
			r += 5;
		}
	}

	return 0;
}