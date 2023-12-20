//
// Created by 13584 on 2023/11/14.
//
#include <stdio.h>
#define N 1000
int main() {
  int n;
  int a[N];
  scanf("%d", &n);
  for (int i = 1; i <= n; ++i) {
    scanf("%d", &a[i]);
  }
  for (int i = 1; i <= n;i++) {
    int tem = i;
    for (;;) {
      if (a[tem] == tem) {
        printf("%d ", tem);
        break;
      } else {
        tem = a[tem];
      }
    }
  }
  return 0;
}