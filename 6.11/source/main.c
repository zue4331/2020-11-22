#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, j, r;
	int s[10] = { 5,6,8,2,3,7,9,4,1,0 };
	for (j = 0; j < 10; j++) {
		for (int i = 0; i < 10 - j; i++) {
			if (s[i] > s[i + 1]) {
				a = s[i];
				s[i] = s[i + 1];
				s[i + 1] = a;
			}
		}
		for (r = 0; r < 10; r++)
			printf("%d", s[r]);
		printf("\n");
	}
	system("pause");
	return 0;
}
