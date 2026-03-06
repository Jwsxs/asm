#include <stdio.h>
#include <stdlib.h>

extern void GET_ADDRESS(int var);

int main() {
  //int* arr = (int*)malloc(sizeof(int) * 5);

  int arr[5] = {0, 1, 2, 3, 4};

  //*(arr + 2) = 18;

  for (int i = 0; i < 5; i++) {
    GET_ADDRESS(*(arr+i));
    printf("%d - ", *(arr+i));
    //printf("%p\n", &*(arr + i));
  }
  return 0;
}
