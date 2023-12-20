//
// Created by 13584 on 2023/11/25.
//
#include <stdio.h>

int flag=0;
int k;
int va,vb,vc;
int a0,b0,c0;

void pour(int a,int b,int c);
int sum(int a,int b,int v){
  if (a+b>=v){
    a=v;
  } else{
    a+=b;
  }
  return a;
}
int main(){
  int a,b,c;
  scanf("%d%d%d%d%d%d%d%d%d%d",&k,&va,&vb,&vc,&a,&b,&c,&a0,&b0,&c0);
  pour(a,b,c);
  if (flag==1){
    printf("Yes\n");
  } else{
    printf("No\n");
  }
}
void pour(int a,int b,int c) {
  if (a == a0 && b == b0 && c == c0) {
    flag = 1;
    return;
  } else if (k-->0) {
    int tem=k;
    pour(sum(a,b,va),0,c);
    k=tem;
    pour(sum(a,c,va),b,0);
    k=tem;
    pour(a, sum(b,c,vb),0);
    k=tem;
    pour(0, sum(b,a,vb),c);
    k=tem;
    pour(0,b, sum(c,a,vc));
    k=tem;
    pour(a,0, sum(c,b,vc));
    k=tem;
  } else{
    return;
  }
}