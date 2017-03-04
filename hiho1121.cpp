// hiho1121.cpp -- 二分图一·二分图判定
// WA 
// 想法太简单，对于与前面没有连接的情况没有考虑
// 即1 3；3 4； 5 2； 1 5；此程序会判断为Wrong
// 感觉得回溯 
#include <stdio.h>
#include <string.h>
#define maxn 10010
int main()
{
	freopen("test.in", "r", stdin);
	freopen("test.out", "w", stdout);
	int T;
	scanf("%d", &T);
	while (T--) {
		int N, M;
		scanf("%d%d", &N, &M);
		int link[maxn] = {};
		memset(link, 0, sizeof(link));
		int ans = 1;
		for (int i = 0; i < M; i++) {
			int u, v;
			scanf("%d%d", &u, &v);
			if (link[u] == 0 && link[v] == 0) { link[u] = 1; link[v] = -1; }
			if (link[u] == 0 && link[v] != 0) { link[u] = -link[v]; }
			if (link[u] != 0 && link[v] == 0) { link[v] = -link[u]; }
			if (link[u] != 0 && link[v] != 0) {
				if (link[u] + link[v] != 0) { ans = 0; break; }
			}
		}
		printf("%s\n", ans ? "Correct": "Wrong");
	}
	return 0;
}
