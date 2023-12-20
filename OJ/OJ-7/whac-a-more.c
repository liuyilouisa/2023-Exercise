//
// Created by 13584 on 2023/11/24.
//
#include <stdio.h>
#include <math.h>
#define H 70
#define L 70

int map[H][L];
int value[H][L];
int flag = 0;
int d;

int sum(int x, int y);
int main() {
  //输入
  int n, m;
  scanf("%d %d %d", &n, &m, &d);
  for (int i = d; i < d + n; ++i) {
    for (int j = d; j < d + m; ++j) {
      scanf("%d", &map[i][j]);
    }
  }
  int i = 0;
  int x = 0;
  int y = 0;
  value[0][0]=sum(d, d);
  int max = value[0][0];
  int anx = 0;
  while (i < m * n) {
    int tem=value[x][y];
    switch (flag) {
      //右
      case 0:y++;
        value[x][y]=tem;
        sum(x + d, y + d);
        if (y == m - 1) flag = 1;
        break;
        //右下
      case 1:x++;
        value[x][y]=tem;
        sum(x + d, y + d);
        flag = 2;
        break;
        //左
      case 2:y--;
        value[x][y]=tem;
        sum(x + d, y + d);
        if (y == 0)flag = 3;
        break;
        //左下
      case 3:x++;
        value[x][y]=tem;
        sum(x + d, y + d);
        flag = 0;
        break;
      default:break;
    }
    if (max <= value[x][y]&&x<n&&y<m) {
      max = value[x][y];
    }
    i++;
  }
  int out_x[H*H];
  int out_y[H*H];
  int a=0;
  int b=0;
  for (int j = 0; j < n; ++j) {
    for (int k = 0; k < m; ++k) {
      if (value[j][k]==max){
        anx++;
        out_x[a++]=j+1;
        out_y[b++]=k+1;
      }
    }
  }
  printf("%d %d\n",max,anx);
  for (int j = 0; j < a; ++j) {
      printf("%d %d\n",out_x[j],out_y[j]);
  }
  return 0;
}
int sum(int x, int y) {
  if (x == d && y == d) {
    int result = 0;
    for (int i = -d; i <= d; ++i) {
      int tem = d - abs(i);
      for (int j = -tem; j <= tem; ++j) {
        result += map[x + i][y + j];
      }
    }
    return result;
  }
  switch (flag) {
    case 0:
      for (int i = 0; i < d; ++i) {
        value[x-d][y-d]+=(map[x+d-i][y+i]-map[x+d-i][y-i-1]);
        value[x-d][y-d]+=(map[x-d+i][y+i]-map[x-d+i][y-i-1]);
      }
      value[x-d][y-d]+=(map[x][y+d]-map[x][y-d-1]);
      break;
    case 2:
      for (int i = 0; i < d; ++i) {
        value[x-d][y-d]+=(map[x+d-i][y-i]-map[x+d-i][y+i+1]);
        value[x-d][y-d]+=(map[x-d+i][y-i]-map[x-d+i][y+i+1]);
      }
      value[x-d][y-d]+=(map[x][y-d]-map[x][y+d+1]);
      break;
    case 1:case 3:
      for (int i = 0; i < d ; ++i) {
        value[x-d][y-d]+=(map[x+i][y+d-i]-map[x-i-1][y+d-i]);
        value[x-d][y-d]+=(map[x+i][y-d+i]-map[x-i-1][y-d+i]);
      }
      value[x-d][y-d]+=(map[x+d][y]-map[x-d-1][y]);
      break;
    default:break;
  }
  return value[x-d][y-d];
}













