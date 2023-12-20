//
// Created by 13584 on 2023/10/15.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
  int n = 0;
  scanf("%d", &n);
  getchar();
  for (int i = 0; i < n; i++) {
    int num = 0, neg = 0, flag = 1;
    char s[15], out[21];
    gets(s);
    int len = strlen(s);
    int a[21] = {0};
    for (int j = 1; j < len; j++) {
      if (isdigit(s[j]) == 0 ) {
        printf("Radix Error\n");
        flag = 0;
        break;
      }
    }
    if (len == 1 && s[0] == '-') {
      printf("Radix Error\n");
      flag = 0;
    }
    if (s[0] == 'Z'){
      printf("Radix Error\n");
      flag = 0;
    }
    if (flag == 1) {
      int k = 0;
      num = atoi(s);
      if (s[0] == '-') {
        num = -num;
        neg = 1;
      }
      for (k = 0; num > 0; k++) {
        a[k] = num % 3;
        num /= 3;
      }
      if (neg == 0) {
        for (int l = 0; l <= k; l++) {
          if (a[l] == 1) { out[l] = '1'; }
          if (a[l] == 0) { out[l] = '0'; }
          if (a[l] == 2) {
            out[l] = 'Z';
            a[l + 1]++;
          }
          if (a[l] == 3) {
            out[l] = '0';
            a[l + 1]++;
          }
        }
      }
      if (neg == 1) {
        for (int l = 0; l <= k; l++) {
          if (a[l] == 1) { out[l] = 'Z'; }
          if (a[l] == 0) { out[l] = '0'; }
          if (a[l] == 2) {
            out[l] = '1';
            a[l + 1]++;
          }
          if (a[l] == 3) {
            out[l] = '0';
            a[l + 1]++;
          }
        }
      }
      if (out[k] != '0' || k == 0) {
        printf("%c", out[k]);
      }
      for (int m = k - 1; m >= 0; m--) {
        printf("%c", out[m]);
      }
      printf("\n");
    }
  }
  return 0;
}