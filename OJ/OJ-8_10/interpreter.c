//
// Created by 13584 on 2023/11/26.
//
#include <stdio.h>

int main(){
  int d;
  scanf("%x",&d);
  float const *p= (float *) &d;
  int const *q=&d;
  printf("%d\n%u\n%.6f\n%.3e",*q,*q,*p,*p);
  return 0;
}
