//
// Created by 13584 on 2023/10/24.
//
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  getchar();
  char a[n + 2][n + 2];
  char b[n][n];
  //输入
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      scanf("%c", &a[i][j]);
    }
    getchar();
  }
  //扩大边界的初始化
  for (int i = 0, j = n + 1; i <= n + 1; ++i) {
    a[i][j] = 48;
    a[j][i] = 48;
  }
  for (int i = 0, j = 0; i <= n + 1; ++i) {
    a[i][j] = 48;
    a[j][i] = 48;
  }
  //counting
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      if (a[i][j] == 42) {
        b[i - 1][j - 1] = 42;
      } else {
        int vectors[8][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, \
      {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
        int count = 0;
        for (int k = 0; k < 8; ++k) {
          int newI = i + vectors[k][0];
          int newJ = j + vectors[k][1];
          if (a[newI][newJ] == '*') {
            count++;
          }
        }
        b[i - 1][j - 1] = count + 48;
      }
    }
  }//out
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      printf("%c", b[i][j]);
    }
    printf("\n");
  }
  return 0;
}