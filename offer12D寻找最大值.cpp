#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		vector<int> nums(N);
		for (int i = 0; i < N; i++)
			cin >> nums[i];
		int res = 0;
		for (int i = 0; i < N; i++) {
			for (int j = i + 1; j < N; j++) {
				res = max(res, nums[i] * nums[j] * (nums[i] & nums[j]));
			}
		}
		cout << res << endl;
	}
	return 0;
}