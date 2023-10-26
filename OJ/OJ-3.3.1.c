//
// Created by 13584 on 2023/10/15.
//
#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
  int n = 0, i = 0, num = 0, j = 0, t = 0, numb = 0, flag = 0;
  unsigned char str[15];
  scanf("%d", &n);
  getchar();
  for (i = 0; i < n; i++) {
    t = 0;
    int a[15] = {0};
    gets(str);
    num = strlen(str);
    int b = num-1;
    for (j = 0; j < num; j++, b--) {
      int m= str[j];
        switch (m) {
          case 49:a[j] = 1;break;
          case 48:a[j] = 0;break;
          case 90:a[j] = -1;break;
          default:flag=1;
          break;
        }
      t += a[j] * pow(3.0, b);
    }
    if (flag == 1) { printf("Radix Error\n");continue; }
    else{
    printf("%d\n", t);}
  }
  return 0;
}