// hiho1223.cpp -- ≤ªµ» Ω
// WA
#include <stdio.h> 
#include <string.h>
#define maxn 60
int main()
{
//	freopen("test.in", "r", stdin);
//	freopen("test.out", "w", stdout);
	int n;
	scanf("%d", &n);
	char op[maxn][5];
	char c[5];
	int num[maxn];
	for (int i = 0; i < n; i++) {
		scanf("%s%s%d", c, op[i], &num[i]);
		printf("%s %s %d\n", c, op[i], num[i]);
	}
	
	int best = 0;
	for (int x = -10; x < 1010; x++) {
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if(!(strcmp(op[i], "<")) && x < num[i]) { cnt++;  }
			if(!(strcmp(op[i], "<=")) && x <= num[i]) cnt++;
			if(!(strcmp(op[i], "=")) && x == num[i]) cnt++;
			if(!(strcmp(op[i], ">")) && x > num[i]) cnt++;
			if(!(strcmp(op[i], ">=")) && x >= num[i]) cnt++;
			printf("(x = %d) (i = %d) cnt = %d best = %d\n", x, i, cnt, best);
		}
		if (cnt > best) best = cnt;
	}
	printf("%d\n", best);
	return 0;
}
