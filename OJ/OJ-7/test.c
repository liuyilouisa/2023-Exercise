//
// Created by 13584 on 2023/11/23.
//
#include <stdio.h>
#include <math.h>

int dist(int n) {
  int k=0;
  while (n > pow(2, k)) {
    k++;
  }
  return pow(2, k);
}
int main(){
  int n=1;
  printf("%d", dist(n));
  return 0;
}