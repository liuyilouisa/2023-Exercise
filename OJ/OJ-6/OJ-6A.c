//
// Created by 13584 on 2023/11/13.
//
#include <stdio.h>

int pascal(int m, int n) {
  if (m == 1) {
    return 1;
  }
  if (n == 1 || n == m + 1) {
    return 1;
  }
  int sum;
  sum = pascal(m - 1, n - 1) + pascal(m - 1, n);
  return sum;
}
int main() {
  int m = 0, n = 0;
  scanf("%d %d", &m, &n);
  printf("%d", pascal(m-1, n));
}