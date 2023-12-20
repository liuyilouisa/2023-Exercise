//
// Created by 13584 on 2023/12/19.
//
#include <stdlib.h>
#include <stdio.h>

int cmp(const void*a,const void *b){
  return (*(const int*)a-*(const int*)b);
}
int main(){
  int n,q;
  scanf("%d %d",&n,&q);
  int *a= malloc(sizeof(int)*n);
  for (int i = 0; i < n; ++i) {
    scanf("%d",&a[i]);
  }
  for (int i = 0; i < q; ++i) {
    int key;
    int *tem;
    scanf("%d",&key);
    tem=bsearch(&key,a,n,sizeof(int),cmp);
    if (tem==NULL)printf("-1\n");
    else printf("%lld\n",tem-a);
  }
  return 0;
}