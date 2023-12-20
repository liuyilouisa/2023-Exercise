//
// Created by 13584 on 2023/10/9.
//
#include <stdio.h>

int main(){
  int n,i=0,max;
  scanf("%d",&n);
  max=n;
  for(;n!=1;i++){
    n=(n%2==0?n/2:n*3+1);
    if (n>max){
      max=n;
    }
  }
  printf("%d %d\n",i,max);
  return 0;
}