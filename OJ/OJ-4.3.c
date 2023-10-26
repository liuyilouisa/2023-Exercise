//
// Created by 13584 on 2023/10/22.
//
#include <stdio.h>


int main() {
  int a[9][9];
  int flag = 0;
//  输入
  for (int i = 0; i < 9; ++i) {
    for (int j = 0; j < 9; ++j) {
      scanf("%d", &a[i][j]);
    }
    getchar();
  }
//  检查宫
  for (int i = 0; i < 9; i = i + 3) {
    for (int j = 0; j < 9; j = j + 3) {
      for (int t = 0; t < 3; ++t) {
        for (int k = 0; k < 3; ++k) {
          for (int l = 0; l < 3; ++l) {
            for (int m = 0; m < 3; ++m) {
              if (t == l && k == m) {
                continue;
              } else if (a[i + t][j + k] == a[i + l][j + m]) {
                flag = 1;
                printf("NO\n");
                return 0;
              } else {
                flag = 0;
              }
            }
          }
        }
      }
    }
  }

//检查行和列
  for (int i = 0; i < 9; ++i) {
    for (int j = 0; j < 9; ++j) {
      for (int k = j + 1; k < 9; ++k) {
        if (a[i][j] == a[i][k]) {
          printf("NO\n");
          flag = 1;
          return 0;
        }
      }
    }
  }
  for (int i = 0; i < 9; ++i) {
    for (int j = 0; j < 9; ++j) {
      for (int k = j + 1; k < 9; ++k) {
        if (a[j][i] == a[k][i]) {
          printf("NO\n");
          flag = 1;
          return 0;
        }
      }
    }
  }
  if (flag == 0) {
    printf("YES\n");
  }
  return 0;
}