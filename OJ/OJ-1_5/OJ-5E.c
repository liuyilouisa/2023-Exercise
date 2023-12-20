//
// Created by 13584 on 2023/10/30.
//
#include <stdio.h>
#include <math.h>

int rad(int n,int m){
  int a[5]={0};
  int len=1;
  int out=0;
  for (int i = 0; n>0; ++i) {
    a[i]=n%10;
    n=n/10;
    len++;
    if (a[i]>=m){
      return 0;
    }
  }
  for (int i = 0; i < len; ++i) {
    out+= pow(m,i)*a[i];
  }
  return out;
}
int main(){
  int p,q,r;
  scanf("%d %d %d",&p,&q,&r);
  int p0,q0,r0;
  int flag=0;
  for (int i = 2; i < 41; ++i) {
    p0= rad(p,i);
    q0= rad(q,i);
    r0= rad(r,i);
    if (p0==0||q0==0||r0==0){
      continue;
    }
    if (p0*q0==r0){
      printf("%d\n",i);
      flag=1;
      break;
    }
  }
  if (flag==0){
    printf("0\n");
  }
  return 0;
}