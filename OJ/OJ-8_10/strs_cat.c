//
// Created by 13584 on 2023/12/3.
//
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define N 1005

void my_str_cat(char *a, const char *b) {
  while(*a!='\0'){
    a++;
  }
  while(*b!='\0'){
    *(a++)=*(b++);
  }
  *a='\0';
}
bool equal(const char *a, const char *b) {
  while (*a!='\0'&&*b!='\0') {
    if (*(a++) != *(b++)) return false;
  }
  return true;
}
int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    char s1[N];
    scanf("%s", s1);
    char s2[N];
    scanf("%s", s2);
    for (int i = strlen(s1); i >= 0; --i) {
      char a[i+1];
      for (int j = 0; j < i+1; ++j) {
        a[j]=s1[strlen(s1)-i+j];
      }
      a[i]='\0';
      char b[i+1];
      for (int j = 0; j < i+1; ++j) {
        b[j]=s2[j];
      }
      b[i]='\0';
      if (equal(a,b)){
        s1[strlen(s1)-i]='\0';
        my_str_cat(s1,s2);
        break;
      }
    }
    printf("%s\n", s1);
  }
  return 0;
}