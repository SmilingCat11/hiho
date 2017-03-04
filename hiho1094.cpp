// hiho1094.cpp -- Lost in the city
// AC

#include <stdio.h>
#include <string.h>
#define maxn 210

int is_same(char s[][maxn], char t[][5], int i, int j)
{
	int ans = 1;
	int north = 1, south = 1, east = 1, west = 1;
	for (int m = -1; m < 2; m++) {
		for (int n = -1; n < 2; n++) {
			if (s[i+m][j+n] != t[1+m][1+n])	north = 0;
			if (s[i-m][j-n] != t[1+m][1+n]) south = 0;
			if (s[i-n][j+m] != t[1+m][1+n]) west = 0;
			if (s[i+n][j-m] != t[1+m][1+n]) east = 0;
			ans = north || south || west || east;
			if (!ans) break;
		}
	}
	return ans;
}

int main()
{
	freopen("test.in", "r", stdin);
	freopen("test.out", "w", stdout);
	int N, M;
	char s[maxn][maxn];
	char t[5][5];
	memset(s, 0, sizeof(s));
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++) 
		scanf("%s", s[i]);
	for (int i = 0; i < 3; i++)
		scanf("%s", t[i]);
	
	for (int i = 1; i < N-1; i++) {
		for (int j = 1; j < M-1; j++) {
			if (s[i][j] == t[1][1]) {
				if ( is_same(s, t, i, j) ) printf("%d %d\n", i+1, j+1);
			}
		}
	}
	return 0;
}
