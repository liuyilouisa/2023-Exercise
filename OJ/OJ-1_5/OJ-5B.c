//
// Created by 13584 on 2023/10/28.
//
#include <stdio.h>
#include <math.h>

int main() {
  int n = 0, t = 0;
  scanf("%d %d", &n, &t);
  int a = 0;
  for (int i = 1; i <= n; ++i) {
    int b = 0;
    for (int j = 0; j < i; ++j) {
      b += pow(10, j) * t;
    }
    a += b;
  }
  printf("%d\n", a);
  return 0;
}
