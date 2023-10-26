//
// Created by 13584 on 2023/10/20.
//
#include<stdio.h>

int main(){
  int n=0,N=0;
  scanf("%d",&N);
  getchar();
  for(;N>0;N--) {
    scanf("%d", &n);
    getchar();
    int a[n];
    int flag=0;
    for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
      getchar();
    }
    for (int j=0;j<n-1;j++){
      if(a[n-1]<a[j]){
        flag=1;
        break;
      }
    }
    if (flag==1){
      printf("No\n");
    } else{
      printf("Yes\n");
    }
  }
  return 0;
}