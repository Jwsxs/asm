#include <stdio.h>

extern void ASM_MAIN(int MAX_VALUE);

int main() {
  int MAX_VALUE;
  scanf("%d", &MAX_VALUE);
	
  ASM_MAIN(MAX_VALUE);
  
  return 0;
}
