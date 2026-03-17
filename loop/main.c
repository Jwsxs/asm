#include <stdio.h>

extern void MULTS_OF_X(int x);

int main() {
	int x;
	printf("Getting all the mults of 3 'till: ");
	scanf("%d", &x);
	
	MULTS_OF_X(x);

	return 0;
}
