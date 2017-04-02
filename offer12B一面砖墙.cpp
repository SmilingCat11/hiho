#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
	freopen("test.in", "r", stdin);
	int N;
	cin >> N;
	vector<vector<int>> wall(N);
	vector<vector<int>> block(N);
	unordered_map<int, int> hash;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		wall[i].resize(n);
		block[i].resize(n-1);
		int sum = 0;
		for (int j = 0; j < n; j++) {
			cin >> wall[i][j];
			sum += wall[i][j];
			if (j != n-1) { block[i][j] = sum; hash[block[i][j]]++; }
		}
	}
	
	int res = 0;
	for (auto it = hash.begin(); it != hash.end(); ++it) {
		if (it->second > res) res = it->second;
	}
	
	cout << N - res << endl;
	
	return 0;
}