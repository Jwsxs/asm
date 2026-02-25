#include <stdio.h>

void set(int *a, int value) {
	*a = value;
}

int main() {
	int a;
	set(&a, 5);
	return 0;
}
