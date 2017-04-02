#include <iostream>
#include <unordered_map>
#include <vector>
const int maxn = 1000010;

using namespace std;
int main()
{
	int N;
	cin >> N;
	
	vector<int> isPrime(maxn, 1);
	isPrime[0] = -1;
	isPrime[1] = -1;
	for (int i = 2; i * i < maxn; i++) {
		if (!isPrime[i]) continue;
		for (int j = i * i; j < maxn; j += i)
			isPrime[j] = 0;
	}
	
	int P;
	for (P = 2; P < N; P++)
		if (isPrime[P] && isPrime[N-P]) {
			cout << P << " " << N-P << endl;
			break;
		}
	
	return 0;
}