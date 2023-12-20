//
// Created by 13584 on 2023/10/30.
//
#include <stdio.h>

int main(){
  //input
  int n=0;
  scanf("%d",&n);
  int x=0;
  int y=0;
  int a[1000][1000]={0};
  x=(n-1)/2;
  a[x][y]=1;
  //generate
  for (int i = 2; i <= n*n; ++i) {
    int temx=x+1;
    int temy=y-1;
    if(temx>n-1){
      temx=0;
    }
    if (temy<0){
      temy=n-1;
    }
    if (a[temx][temy]!=0){
      temx=x;
      temy=y+1;
      if (temy>n-1){
        temy=0;
      }
    }
    x=temx;
    y=temy;
    a[x][y]=i;
  }
  //output
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      printf("%d ",a[j][i]);
    }
    printf("\n");
  }
  return 0;
}