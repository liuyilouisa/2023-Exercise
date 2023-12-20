//
// Created by 13584 on 2023/9/24.
//
#include <stdio.h>
#include <ctype.h>

//？？
//void test(int *a) {
//  for (int i = 0; i < 3; ++i) {
//    for (int j = 0; j < 3; ++j) {
//      *(a + i * 3 + j) =*(a+i*3) + *(a + i * 3 + j);
//    }
//  }
//}
//int main() {
//  int a[3][3] = {{1, 2, 3}, \
//  {4, 5, 6}, \
//  {7, 8, 9}};
//  test(a);
//  for (int i = 0; i < 3; ++i) {
//    for (int j = 0; j < 3; ++j) {
//      printf("%d ", a[i][j]);
//    }
//    printf("\n");
//  }
//  return 0;
//}

//2023/11/21
#define size 128
int main(){
  char a[size]={'0','1','b'};
  char *p=a;
  printf("%s\n",a);
  for (int i = 0; i < size; ++i) {
    a[0]=i;
    printf("%d=%c\n",i,*p);
  }
}

