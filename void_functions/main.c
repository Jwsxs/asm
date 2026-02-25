#include <stdio.h>

void set(int* a, int value) {
	*a = 5;
}

int main() {
	int a;
	set(&a, 5);

	printf("%d", a);
	return 0;
}
