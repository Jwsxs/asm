#include <stdio.h>

extern int add(int a, int b);

int main() {
  int n1, n2;
  scanf("%d%d", &n1, &n2);
  int result = add(n1, n2);

  printf("%d\n", result);

  return 0;
}
