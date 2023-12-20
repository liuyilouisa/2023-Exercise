//
// Created by 13584 on 2023/10/15.
//
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
  int n = 0;
  scanf("%d", &n);
  getchar();
  //先写个循环读每行
  while(n--) {
    int judge = 1;
    int t = 0;
    int a[15] = {0};
    char s[15];
    scanf("%s",&s);
    int num = strlen(s);
    int numb = num - 1;
    for (int j = 0; j < num; j++) {
      if (s[j] != '0' && s[j] != '1' && s[j] != 'Z') {
        judge = 0;
        printf("Radix Error\n");
        break;
      }
    }
    if (judge != 0) {
      for (int j = 0; j < num; j++) {
        if (s[j] == '0') { a[j] = 0; }
        else if (s[j] == '1') { a[j] = 1; }
        else if (s[j] == 'Z') { a[j] = -1; }
        else if (s[j] == '-Z') { a[j] = 1; }
        else if (s[j] == '-1') { a[j] = -1; }
      }
      for (int j = 0; j < num; j++, numb--) t += a[j] * pow(3, numb);
      printf("%d\n", t);
    }
  }
  return 0;
}