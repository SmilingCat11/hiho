// hiho1082.cpp -- 然而沼跃鱼早就看穿了一切 
// WA 
#include <stdio.h>
#include <string.h>
#define maxn 210
char s[maxn];
char s1[] = "marshtomp";
char s2[] = "MARSHTOMP";
char s3[] = "fjxmlhx";
int main()
{
//	freopen("test.in", "r", stdin);
//	freopen("test.out", "w", stdout); 
	while ( gets(s) != NULL ) {
		for (int i = 0; i < strlen(s); i++) {
			int j = 0, k = 0;
			while (s[i+k] == s1[j] || s[i+k] == s2[j]) {
				k++; j++;
				if (j == strlen(s1)) {
					i = i + k;
					printf("%s", s3); 
					break;
				}
			}
			printf("%c", s[i]);
		}
		printf("\n");
	}
	return 0;
}
