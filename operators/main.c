#include <stdio.h>

extern int ADD(int a, int b);
extern int SUB(int a, int b);
// extern int MULT(int a, int b);
// extern int DIV(int a, int b);

int MULT(int a, int b) {
	int res = 0;
	for (int i = 0; i < b; i++) {
		res = ADD(res, a);
	}
	return res;
}

int DIV(int a, int b) {
	int res = a;
	int temp = 0;
	for (int i = 0; i < a; i++) {
		res = SUB(res, 2);
		temp++;
	}
	return temp;
}

int main() {
	printf("%d\n", ADD(36, 49));
	printf("%d\n", SUB(25, 12));

	printf("%d\n", MULT(27, 2));
	printf("%d\n", DIV(34, 2));
	return 0;
}
