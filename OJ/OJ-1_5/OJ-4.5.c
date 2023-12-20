//
// Created by 13584 on 2023/10/27.
//
#include <stdio.h>

int main() {
  int m = 0, n = 0, x0 = 0, y0 = 0;
  scanf("%d %d %d %d", &n, &m, &x0, &y0);
  getchar();
  char map[n + 2][m + 2];
  //边界初始化
  for (int i = 0, j = m+1; i <= n + 1; ++i) {
    map[i][j] = 48;
  }
  for (int i = 0, j = 0; i <= n + 1; ++i) {
    map[i][j] = 48;
  }
  for (int i = 0, j = n+1; i <= m + 1; ++i) {
    map[j][i] = 48;
  }
  for (int i = 0, j = 0; i <= m + 1; ++i) {
    map[j][i] = 48;
  }
  //输入
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      scanf("%c", &map[i][j]);
    }
    getchar();
  }
  //counting
  int a[2500][2];
  a[0][0]=x0;
  a[0][1]=y0;
  int b[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
  int count = 1, flag = 1, i = 1;
  while (flag == 1) {
    flag = 0;
    for (int k = 0; k < 4; ++k) {
      int NEWX = x0 + b[k][0];
      int NEWY = y0 + b[k][1];
      if (map[NEWX][NEWY] == '#') {
        a[i][0] = NEWX;
        a[i][1] = NEWY;
        i++;
        map[x0][y0] = 48;
        x0 = NEWX;
        y0 = NEWY;
        count++;
        flag = 1;
      }
    }
  }
  printf("%d\n", count);
  for (int k = 0; k < count; ++k) {
    printf("%d %d\n", a[k][0], a[k][1]);
  }
  return 0;
}