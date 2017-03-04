#include <stdio.h> 

int is_five(double x) 
{
	int c = int(x);
	int result = 0;
	if (x - c == 0.0 && c % 5 == 0 ) result = 1;
//	printf("%lf %d %lf", x, c, );
	return result;
}

int main()
{
	freopen("test.in", "r", stdin);
	freopen("test.out", "w", stdout);
	int Q;
	scanf("%d", &Q);
	while(Q--) {
		double a;
		scanf("%lf", &a);
		printf("%lf %d\n", a, is_five(a));
	}
	return 0;
}
