//
// Created by 13584 on 2023/10/10.
//
#include <stdio.h>

int main() {
  long int n, k;
  char a[1000000] = "\0";
  scanf("%ld", &n);
  getchar();
  gets(a);
  scanf("%ld", &k);
  for (int j = k - 1; j >= 0; j--) {
    printf("%c",a[j]);
  }
  for (int j = n - 1; j > k - 1;  j--) {
    printf("%c",a[j]);
  }
  return 0;
}