// hiho1121.cpp -- ����ͼһ������ͼ�ж�
// WA 
// �뷨̫�򵥣�������ǰ��û�����ӵ����û�п���
// ��1 3��3 4�� 5 2�� 1 5���˳�����ж�ΪWrong
// �о��û��� 
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
