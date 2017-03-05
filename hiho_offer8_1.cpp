// hiho_offer8_1.cpp --Ð¡HoµÄÇ¿ÆÈÖ¢
// WA
#include <stdio.h> 
int main()
{
	int T;
	scanf("%d", &T);
	while (T--) {
		int L, F, D;
		scanf("%d%d%d", &L, &F, &D);
		int ans = 0;
		if (L % D == 0) {
			for (int i = 0; i < D; i++) {
				for (int k = L/D-2; k*D <= L-F; k++) {
					if (k*D <= L - F - i && k*D >= L - D - i) {
						ans = 1;
						break;
					}
				}
			}
		}
		printf("%s\n", ans? "YES": "NO");
	}
	return 0;
}
