//
// Created by 13584 on 2023/12/5.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

int main() {
  char ch;
  char order1[N];
  char order2[N];
  char output[N];
  int i = 0, j = 0,m=0;
  while (1) {
    ch = getchar();
    if (ch == '\n')break;
    if (ch != ':') {
      order1[i++] = ch;
    } else {
      order2[j++] = order1[i - 1];
      i--;
    }
  }
  char *name = malloc(sizeof(char) * N);
  scanf("%100s", name);
  printf("%s", name);
  free(name);
  int jud=1;
  while (1) {
    int flag = 0;
    char t=getchar();
    if (t=='\n') {
      printf("%s",output);
      break;
    }
    char *tem = malloc(sizeof(char)*N);
    switch(jud){
      case 0:tem[0]=getchar();
        if (tem[0]=='\n'){
          printf("%s",output);
          return 0;
        }
        scanf("%s",tem+1);
        break;
      case 1:scanf("%s",tem);
        break;
    }
    if (tem[0] == '-' && strlen(tem) == 2) {
      char o = tem[1];
      for (int k = 0; k < j; ++k) {
        if (o == order2[k]) {
          flag = 1;
          char *p = malloc(sizeof(char) * N);
          char q = getchar();
          if (q == '\n') {
            printf(": option requires an argument -- '%c'", o);
            return 0;
          } else {
            scanf("%s", p);
            jud=0;
            output[m++]='\n';
            output[m++]=o;
            output[m++]='=';
            for (int l = 0; l < strlen(p); ++l) {
              output[m++]=p[l];
            }
            free(p);
            break;
          }
        }
      }
      for (int k = 0; k < i; ++k) {
        if (o == order1[k]) {
          flag = 1;
          output[m++]='\n';
          output[m++]=o;
          break;
        }
      }
      if (!flag) {
        printf(": invalid option -- '%c'", o);
        return 0;
      }
    }
    free(tem);
  }
  return 0;
}