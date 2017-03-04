// 
#include <stdio.h> 
#include <math.h>
#define maxn 60

//int is_five(double x) 
//{
//	int c = int(x);
//	int result = 0;
//	if (x - c == 0 && c % 5 == 0 ) result = 1;
//	return result;
//}

int main()
{
//	freopen("test.in", "r", stdin);
//	freopen("test.out", "w", stdout);
	int Q;
	scanf("%d", &Q);
	while(Q--) {
		int price[maxn] = {};
		int prefer[maxn] = {};
		int n, ans;
		scanf("%d", &n);
		double mprice;
		for (int i = 0; i < n; i++) {
			scanf("%lf%d", &mprice, &prefer[i]);
			price[i] = mprice * 10;
			if ( price[i] % 50 == 0 && prefer[i] > ans) ans = prefer[i]; 
		}

		for (int i = 0; i < n; i++) {
			for (int j = i+1; j < n; j++) {
				if ((price[i] + price[j]) % 50 == 0 && prefer[i] + prefer[j] > ans)
					ans = prefer[i] + prefer[j];
			}
		}
		
		for (int i = 0; i < n; i++) {
			for (int j = i+1; j < n; j++) {
				for (int k = j+1; k < n; k++) {
					if ( (price[i]+price[j]+price[k]) % 50 == 0) {
						if ( prefer[i]+prefer[j]+prefer[k]> ans )
							ans = prefer[i]+prefer[j]+prefer[k];
					}
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;

}
