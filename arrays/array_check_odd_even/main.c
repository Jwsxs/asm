#include <stdio.h>

int main() {
	int x[132]; // separa o espaço

	for (int i = 0; i < sizeof(x) / sizeof(x[0]);  i++) { // itera entre cada um
		printf("Number %i\t--\t%d -> %d\n", i + 1, x[i], (x[i] % 2 == 0) ? 1 : 0); // vê se é par
	}

	return 0;
}
