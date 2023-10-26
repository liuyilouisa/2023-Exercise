//
// Created by 13584 on 2023/10/17.
//
#include <stdio.h>

//int jo(int n,int k){
//  if(n==1){
//    return 0;
//  }
//  else{
//    return (jo(n-1,k)+k)%n;
//  }
//}
int main() {
  int n,k;
  int a[500]={0};
  scanf("%d %d",&n,&k);
  for (int t=1;t<=n;t++) {
    int j = t;
    int m=n;
    for (int i = n - 1; i >0; i--, m--){
      while (j<k){
        j=j+m;
      }
      if (j>k){
        j=j-k;
      }
      if (j==k){
        a[t-1]=1;
        break;
      }
    }
    if (a[t-1]==0){
      printf("%d\n",t);
      break;
    }
  }
  return 0;
}