//
// Created by 13584 on 2023/11/16.
//
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 1; i < n + 1; ++i) {
    scanf("%d", &a[i]);
  }
  for (int i = 1; i < n + 1; ++i) {
    int start = i, end = i;
    int jud = 1;
    while (jud) {
      jud = 0;
      if (a[start - 1] < a[i] && start > 1) {
        start--;
        jud = 1;
      }
      if (a[end + 1] < a[i] && end < n) {
        end++;
        jud = 1;
      }
    }
    printf("%d %d\n", start, end);
  }
}