//
// Created by 13584 on 2023/12/5.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 1000

int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    //input
    char *str = malloc(sizeof(char) * N);
    scanf("%s", str);
    char *s1 = malloc(sizeof(char) * N);
    s1 = strtok(str, ";");
    char *s2 = malloc(sizeof(char) * N);
    s2 = strtok(NULL, ";");
    int d1 = atoi(strtok(NULL, ";"));
    int d2 = atoi(strtok(NULL, ";"));
    int size = atoi(strtok(NULL, ";"))-1;
    //operate
    int p=0,q=0,len=0;
    while(len<size){
      if ((strlen(s1)-p)>d1){
        for (int i = 0; i < d1&&len<size; ++i) {
          printf("%c",s1[p++]);
          len++;
        }
      } else{
        int tem1=p;
        for (int i = 0; i < (strlen(s1)-tem1)&&len<size; ++i) {
          printf("%c",s1[p++]);
          len++;
        }
        int tem2=q;
        for (int i = 0; i < (strlen(s2)-tem2)&&len<size; ++i) {
          printf("%c",s2[q++]);
          len++;
        }
        break;
      }
      if ((strlen(s2)-q)>d2){
        for (int i = 0; i < d2&&len<size; ++i) {
          printf("%c",s2[q++]);
          len++;
        }
      } else{
        int tem1=q;
        for (int i = 0; i < (strlen(s2)-tem1)&&len<size; ++i) {
          printf("%c",s2[q++]);
          len++;
        }
        int tem2=p;
        for (int i = 0; i < (strlen(s1)-tem2)&&len<size; ++i) {
          printf("%c",s1[p++]);
          len++;
        }
        break;
      }
    }
    printf("\n");
  }
  return 0;
}