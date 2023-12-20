//
// Created by 13584 on 2023/11/19.
//
#include <stdio.h>

int main(){
  int n,L;
  scanf("%d %d",&n,&L);
  int val[n];
  for (int i = 0; i < n; ++i) {
    scanf("%d",&val[i]);
  }
  int max[n];
  for (int i = 0; i < n; ++i) {
    scanf("%d",&max[i]);
  }
  for (int i = 0; i < n-1; ++i) {
    for (int j = 0; j < n-1; ++j) {
      if(val[j]<val[j+1]){
        int tem=val[j];
        val[j]=val[j+1];
        val[j+1]=tem;
        int temp=max[j];
        max[j]=max[j+1];
        max[j+1]=temp;
      }
    }
  }
  int vol=0;
  int tem=0;
  int output=0;
  for (int i = 0; i < n; ++i) {
    tem+=max[i];
    if (tem>=L){
      output+=(L-vol)*val[i];
      break;
    } else{
      vol=tem;
      output+=max[i]*val[i];
    }
  }
  printf("%d",output);
  return 0;
}