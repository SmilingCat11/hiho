// hiho #1051 补提交卡
// AC
#include <stdio.h> 
#define maxn 105
int main()
{
	int T;
	scanf("%d", &T);
	while (T--) {
		int N, M;
		int a[maxn] = {};
		int a_dist[maxn] = {};
		int amax = 0;
		scanf("%d%d", &N, &M);
		a[0] = 0; //第一天 
		for (int i = 1; i <= N; i++) {
			scanf("%d", &a[i]);
			a_dist[i] = a[i] - a[i-1] - 1;
		}
		a[N+1] = 101;
		a_dist[N+1] = a[N+1] - a[N] - 1;

		if ( M >= N ) amax = 100;
		for (int i = 1; i + M - 1<= N; i++) {
			int asum = M;
			for (int j = 0; j <= M; j++) {
				asum += a_dist[i+j];
			}
			if (asum > amax) amax = asum;
		}
		printf("%d\n", amax);
	}
	return 0;
}
