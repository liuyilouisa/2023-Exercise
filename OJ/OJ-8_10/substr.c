//
// Created by 13584 on 2023/12/1.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100

int main() {
  char *s=(char *)malloc(sizeof (char)*N);
  scanf("%s", s);
  int n= strlen(s);
  char *t=(char *)malloc(sizeof (char)*N);
  scanf("%s", t);
  int m= strlen(t);
  for (int i = 0; i <= n-m; ++i) {
    int flag=1;
    char *q=t;
    char *p=s+i;
    for (int j = 0; j < m; ++j) {
      if (*(p++)!=*(q++)) {
        flag=0;
        break;
      }
    }
    if (flag==1){
      printf("%d ",i);
      continue;
    }
  }
}