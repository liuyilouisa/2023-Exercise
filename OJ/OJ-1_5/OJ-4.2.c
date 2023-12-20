//
// Created by 13584 on 2023/10/22.
//
#include <stdio.h>

int f(int a, int b, int c) {
  int temp = c + b * 10 + a * 100;
  if (temp == 111 || temp == 0 || temp == 100) {
    return 0;
  } else {
    return 1;
  }
}
int main() {
  int m, n;
  scanf("%d %d", &m, &n);
  getchar();
  char a[m][n];
  for (int i = 0; i < n; i++) {
    scanf("%c", &a[0][i]);
  }
  for (int j = 1; j < m; j++) {
    for (int i = 0; i < n; i++) {
      if (i > 0 && i < n - 1) {
        a[j][i] = f(a[j - 1][i - 1]-48, a[j - 1][i]-48, a[j - 1][i + 1]-48)+48;
      } else if (i == 0) {
        a[j][i] = f(0, a[j - 1][i]-48, a[j - 1][i + 1]-48)+48;
      } else if (i == n - 1) {
        a[j][i] = f(a[j - 1][i - 1]-48, a[j - 1][i]-48, 0)+48;
      }
      printf("%c",a[j][i]);
    }
    printf("\n");
  }
  return 0;
}