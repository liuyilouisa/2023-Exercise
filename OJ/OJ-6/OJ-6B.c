//
// Created by 13584 on 2023/11/13.
//
#include <stdio.h>

int tiles(int n) {
  if (n == 2) {
    return 2;
  } else if (n == 3) {
    return 3;
  } else if (n == 1) {
    return 1;
  }
  return tiles(n - 2) + tiles(n - 1);
}
int main() {
  int n;
  scanf("%d", &n);
  printf("%d", tiles(n));
  return 0;
}