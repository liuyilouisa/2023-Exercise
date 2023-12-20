//
// Created by 13584 on 2023/11/22.
//
#include <stdio.h>
#include <math.h>
#define N 100

int ID[N] = {0};
int LEN[N] = {0};
int num = 1;

int dist(int n) {
  int k = 0;
  while (n > pow(2, k)) {
    k++;
  }
  return pow(2, k);
}

void memory(int len, int id) {
  for (int i = 1; i <= num; ++i) {
    if (ID[i] == 0 && LEN[i] == len) {
      ID[i] = id;
      return;
    }
  }
  for (int j = 1; j <= num; ++j) {
    if (ID[j] == 0 && LEN[j] > len) {
      for (int k = num; k > j; --k) {
        ID[k + 1] = ID[k];
        LEN[k + 1] = LEN[k];
      }
      ID[j + 1] = 0;
      LEN[j] /= 2;
      LEN[j + 1] = LEN[j];
      num++;
      memory(len, id);
      return;
    }
  }
}

int main() {
  int n, q;
  scanf("%d %d", &n, &q);
  getchar();
  for (int i = 0; i < q; ++i) {
    LEN[1] = pow(2, n);
    int len;
    char ope;
    scanf("%c", &ope);
    getchar();
    if (ope == 'Q') {
      printf("%d\n", num);
      for (int j = 1; j <= num; ++j) {
        printf("%d ", ID[j]);
      }
      printf("\n");
    }
    if (ope == 'A') {
      int m, id;
      scanf("%d%d", &id, &m);
      getchar();
      len = dist(m);
      memory(len, id);
    }
  }
  return 0;
}