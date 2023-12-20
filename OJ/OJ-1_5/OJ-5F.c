//
// Created by 13584 on 2023/11/2.
//
#include <stdio.h>
#define N 2000
#define test 0

int main() {
  //input
  int n = 0;
  scanf("%d", &n);
  getchar();
  int a[N] = {0};
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
    getchar();
  }//generate
  int max = 0;
  int p = 0;
  int len = 0;
  int start = 0;
  for (int k = test; k <= n - 1; ++k) {
    int flag=1;
    len = 1;
    for (int i = k; i < n-1; ++i) {
      if (a[i]>a[i+1]){
        len++;
      }else{
        flag=0;
        break;
      }
    }
    if (flag==0){
      continue;
    }
    if (len >= max) {
      max = len;
      if (k>0){
        p = a[k - 1];
      } else{
        p=a[k];
      }//be careful!
      start = k;
    }
  }
  int min = a[start];
  int end = 0;
  for (int i = start; i <= start + max; ++i) {
    if (a[i] > p && a[i] <= min) {
      min = a[i];
      end = i;
    }
  }
  int tem = 0;
  tem = p;
  a[start - 1] = min;
  a[end] = tem;
  //output
  for (int i = 0; i < n - max; ++i) {
    printf("%d ", a[i]);
  }
  for (int i = n - 1; i >= n - max; --i) {
    printf("%d ", a[i]);
  }
  return 0;
}