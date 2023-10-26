//
// Created by 13584 on 2023/10/21.
//
#include <stdio.h>

int main() {
  int m = 0;
  int n = 0;
  int p = 0;
  scanf("%d %d %d", &m, &n, &p);
  getchar();
  int a[m][n];
  int b[n][p];
  int c[m][p];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < p; j++) {
      scanf("%d", &b[i][j]);
    }
  }
  for (int k = 0; k < m; ++k) {
    for (int j = 0; j < p; j++) {
      int temp = 0;
      for (int i = 0; i < n; ++i) {
        temp += a[k][i] * b[i][j];
      }
      c[k][j]=temp;
    }
  }
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < p; ++j) {
      printf("%d ",c[i][j]);
    }
    printf("\n");
  }
  return 0;
}