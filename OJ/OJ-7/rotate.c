//
// Created by 13584 on 2023/11/24.
//
#include <stdio.h>

int a, b, c;
void rotate_W(int *x1, int *x2) {
  *x2 = *x1;
  *x1 = *x1 - c;
  int tem = a;
  a = c;
  c = tem;
}
void rotate_S(int *x1, int *x2) {
  *x1 = *x2;
  *x2 = *x2 + c;
  int tem = a;
  a = c;
  c = tem;
}
void rotate_A(int *y1, int *y2) {
  *y2 = *y1;
  *y1 = *y1 - c;
  int tem = b;
  b = c;
  c = tem;
}
void rotate_D(int *y1, int *y2) {
  *y1 = *y2;
  *y2 = *y2 + c;
  int tem = b;
  b = c;
  c = tem;
}
int main() {
  scanf("%d%d%d", &a, &b, &c);
  getchar();
  int m = 0;
  int *x1 = &m;
  int n = a;
  int *x2 = &n;
  int k = 0;
  int *y1 = &k;
  int l = b;
  int *y2 = &l;
  char ch = getchar();
  while (ch != '\n') {
    if (ch == 'W')rotate_W(x1, x2);
    if (ch == 'A')rotate_A(y1, y2);
    if (ch == 'S')rotate_S(x1, x2);
    if (ch == 'D')rotate_D(y1, y2);
    ch=getchar();
  }
  printf("%d %d %d %d",m,n,k,l);
  return 0;
}