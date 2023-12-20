//
// Created by 13584 on 2023/12/19.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100

int cmpfun(const void *a,const void *b) {
  char *str1 = *(char **) a;
  char *str2 = *(char **) b;
  return strcmp(str1, str2);
}
int main(){
  char *str=(char *)malloc(sizeof (char)*N*N);
  char **split= malloc(sizeof(char*)*N*N);
  char *key= malloc(sizeof(char)*N);
  int i=0;
  scanf("%s",str);
  scanf("%s",key);
  char *token=strtok(str,key);
  while(token!=NULL){
    split[i++]=token;
    token=strtok(NULL,key);
  }
  qsort(split, i, sizeof(char*), cmpfun);
  for (int j = 0; j < i; ++j) {
    printf("%s\n",split[j]);
  }
  return 0;
}
