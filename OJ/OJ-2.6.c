//
// Created by 13584 on 2023/10/10.
//
#include <stdio.h>

int main(){
  int n=0,sum=0,t=0;
  int a[100001]={0};
  scanf("%d",&n);
  getchar();
  for (int i=0;i<(n+1);i++){
    scanf("%d",&a[i]);
    if (i>0){
      sum += a[i-1];
      if (i>sum){
        t += (i-sum);
        sum=i;
      }
    }
  }
  printf("%d\n",t);
  return 0;
}
