#include<stdio.h>
void swap(int* a, int* b) {
	int *c=0;	
	c = a;
	a = b;
	b = c;
}

int main() {
	int n = 10;
	int m;
	int numbers[10];
	int i;
	int tmpt = 0;
	// ¿¿¿¿¿¿¿
	for (i = 0; i < n; i++) {
		scanf("%d", &numbers[i]);
	}

	for (i = 0; i <= 9; i++) {
		for (m = i + 1; m <= 9; m++) {
			if (numbers[i] > numbers[m]) {
				swap(&numbers[i], &numbers[m]);
				tmpt = numbers[i];
				numbers[i] = numbers[m];
				numbers[m] = tmpt;
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
