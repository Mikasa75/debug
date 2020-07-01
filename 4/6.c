#include<stdio.h>


int main() {
	int n = 10;
	int m;
	int numbers[10];
	int i;
	int j;
	int tmpt = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &numbers[i]);
	}

	for (i = 0; i < 10; i++) {
		for (j = i + 1; j < 10; j++) {
			if (numbers[i] > numbers[j]) {
				tmpt = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = tmpt;
			}
		}
	}

	for (i = 9; i >= 0; i--)
	{
		printf("%d", numbers[i]);
		if (i != 0) {
			printf(" ");
		}
	}
	return 0;

}
 write since last change for buffer "6.c"

