//
// Created by 13584 on 2023/10/28.
//
#include <stdio.h>
#include <math.h>

int prime(int n){
  int flag=1;
  for (int i = 2; i <= sqrt(n+0.5); ++i) {
    if (n%i==0){
      flag =0;
    }
  }
  return flag;
}
int reverse (int n){
  int tem=0;
  int judge=0;
  int a[4]={0};//below 9999
  for (int i = 0; n>0 ; ++i) {
    a[i]=n%10;
    n=n/10;
    judge++;
  }
  for (int j=0; judge >0 ; ++j,judge--) {
    tem+= pow(10,j)*a[judge-1];
  }
  return tem;
}
int main(){
  int n;
  int count=0;
  scanf("%d",&n);
  for (int i = 2; i <= n; ++i) {
    if (prime(i)&&prime(reverse(i))){
      count++;
    }
  }
  printf("%d\n",count);
  return 0;
}