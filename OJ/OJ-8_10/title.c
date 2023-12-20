//
// Created by 13584 on 2023/12/1.
//
#include <stdio.h>
#include <stdlib.h>
#define N 4096

int read(char *q){
  char tem=1;
  int i=1;
  while ((tem=getchar())!='\n'){
    *(q++)=tem;
    i++;
  }
  *q=0;
  return i;
}
int main(){
  char *q=(char *) malloc(sizeof (char)*N);
  char *p=q;
  int len=read(q);
  int flag=2;
  for (int i = 0; i < len; ++i) {
    if (*p == ' ') {
      flag = 2;
      p++;
      continue;
    }
    if (flag==2){
      if (*p>='a'){
        *p+='A'-'a';
      }
      flag=1;
      p++;
      continue;
    }
    if (flag==1){
      if (*p<='Z'){
        *p+='a'-'A';
      }
      p++;
      continue;
    }
  }
  printf("%s",q);
}