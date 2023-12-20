//
// Created by 13584 on 2023/10/14.
//
#include<stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    int t=0;
    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        t = t + 1;
      }
    }
    if(t%2==1){
      printf("%d ",i);
    }
    }
  return 0;
}