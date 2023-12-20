//
// Created by 13584 on 2023/12/3.
//
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int cmpfun(const void *a,const void *b) {
  char *str1 = *(char **) a;
  char *str2 = *(char **) b;
  int x = strlen(str2) - strlen(str1);
  return x ? x : strcmp(str1, str2);
}

int main(void)
{
  char *ints[]={"c","b","aaaa"};
  int size = sizeof ints / sizeof (char *);

  qsort(ints, size, sizeof(char*), cmpfun);

  for (int i = 0; i < size; i++) {
    printf("%s ", ints[i]);
  }

  printf("\n");
}
