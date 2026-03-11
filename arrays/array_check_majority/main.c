#include <stdio.h>

int main() {
  int ages[10] = { 1, 6, 23, 63, 12, 73, 53, 12, 18, 29};
  
  for (int i = 0; i < 10; i++) {
    if (ages[i] >= 18) {
      printf("%d maior\n", ages[i]);
    } else {
      printf("%d menor\n", ages[i]);
    }
  }
  return 0;
}
    
