//
// Created by 13584 on 2023/10/28.
//
#include <stdio.h>

int main() {
  //input
  int n = 0;
  scanf("%d", &n);
  getchar();
  char a[n];
  int count[26][2] = {0};
  int max = 0;
  scanf("%s", a);
  for (int i = 0; i < n; ++i) {
    if (a[i] >= 'a') {
      count[a[i] - 'a'][0]++;
      if (count[a[i] - 'a'][0] > max) {
        max = count[a[i] - 'a'][0];
      }
    } else {
      count[a[i] - 'A'][1]++;
      if (count[a[i] - 'A'][1] > max) {
        max = count[a[i] - 'A'][1];
      }
    }
  }

  //output
  while (max > 0) {
    for (int i = 0; i < 26; ++i) {
      int judge = 0;
      for (int j = 0; j < 2; ++j) {
        if (count[i][j] >= max) {
          printf("=");
          judge = 1;
        } else if (count[i][j] > 0) {
          printf(" ");
          judge = 1;
        }
      }
      if (judge == 1) {
        printf(" ");//block between letters
      }
    }
    --max;
    printf("\n");
  }
  int len=0;
  for (int i = 0; i < 26; ++i) {
    int judge = 0;
    if (count[i][0] > 0) {
      printf("-");
      judge=1;
    }
    if (count[i][1] > 0) {
      printf("-");
      judge=1;
    }
    if (judge==1){
      len++;
    }
  }
  for (int i = 0; i < len-1; ++i) {
    printf("-");
  }
  printf("\n");
  for (int i = 0; i < 26; ++i) {
    int judge = 0;
    if (count[i][0] > 0) {
      char tem = i + 'a';
      printf("%c", tem);
      judge = 1;
    }
    if (count[i][1] > 0) {
      char tem = i + 'A';
      printf("%c", tem);
      judge = 1;
    }
    if (judge == 1) {
      printf(" ");
    }
  }
  return 0;
}