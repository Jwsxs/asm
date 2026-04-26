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

void DIV(int* div, int* quo) {
	int res = 0; // result

	while (*div - *quo >= 0) {
		*div = SUB(*div, *quo);
		res++;
	}

	// no final div é resto
	// e res é resultado

	// uma maneira simples de retornar sem usar mais uma variável é:
	// -- aplica troca em div e quo (quo vira resto, e div vira o quociente)
	// -- e então mandar o resto para div

	// bitwise swap || usando XOR

 	*div ^= *quo;
	*quo ^= *div;
	*div ^= *quo;
	*div = res;

	// assim div retornando resultado e quo o resto
}

int main() {
	printf("%d\n", ADD(36, 49));
	printf("%d\n", SUB(25, 12));
	printf("%d\n", MULT(27, 2));

	int div = 100;
	int quo = 25;
	int res = quo;
	DIV(&div, &res);
	printf("%d + %d/%d\n", div, res, quo);
	return 0;
}
