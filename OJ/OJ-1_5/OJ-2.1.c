//
// Created by 13584 on 2023/10/9.
//

//Double “for” version
//#include <stdio.h>
//
//int main(){
//  int n;
//  int a[100005];
//  int b[100005];
//  scanf("%d",&n);
//  for (int i=0; i < n*2-1; i++) {
//    scanf("%d",&a[i]);
//    for (int j=0; j < n*2-1 && j!=i; j++){
//      if ( a[i] == a[j] ){
//        a[i] = 0;
//        a[j] = 0;
//      }
//    }
//  }
//  for (int i=0; i < n*2-1; i++) {
//    if ( a[i] != 0 )
//      printf("%d\n",a[i]);
//  }
//  return 0;
//}


//Bucket sort version
#include <stdio.h>

int main(){
  int n;
  int a[200000];
  int b[1000005]={0};
  scanf("%d",&n);
  for (int i=0; i < n*2-1; i++) {
    scanf("%d",&a[i]);
    b[a[i]]++;
  }
  for (int j=0; j < n*10 +1; j++) {
    if ( b[j] == 1 )
      printf("%d\n",j);
  }
  return 0;
}