//
// Created by 13584 on 2023/11/2.
//
//#include <stdio.h>
//#define M 1000
//
//int main() {
//  int n, m, t;
//  scanf("%d %d %d", &n, &m, &t);
//  getchar();
//  int a[M] = {0};
//  for (int i = 0; i < n; ++i) {
//    scanf("%d", &a[i]);
//    getchar();
//  }
//  int b[M] = {0};
//  for (int i = 0; i < m; ++i) {
//    scanf("%d", &b[i]);
//    getchar();
//  }//calculate
//  int sum = 0;
//  int max = 0;
//  int flag=0;//divide
//  for (int i = 0; i < m; ++i) {
//    int start=0;
//    int end=n-1;
//    int mid;
//    while(start<=end){
//      mid=(start+end)/2;
//      sum=a[mid]+b[i];
//      if (sum<t){
//        if (sum>=max){
//          max=sum;
//          flag=1;
//        }
//        start=mid+1;
//      } else if(sum>t){
//        end=mid-1;
//      } else {
//        max=t;
//        flag=1;
//        break;
//      }
//    }
//  }
//  if (flag){
//    printf("%d\n",t-max);
//  } else{
//    printf("-1");
//  }
//  return 0;
//}

#include <stdio.h>

int main() {
  int n, m, t;
  int a[10000] = {0}, b[10000] = {0};
  scanf("%d %d %d", &n, &m, &t);
  for (
      int i = 0;
      i < n;
      i++) {
    scanf("%d", &a[i]);
  }

  for (
      int j = 0;
      j < m;
      j++) {
    scanf("%d", &b[j]);
  }

  int output[2000] = {0};
  int define = -1;
  for (
      int q = 0;
      q < m;
      q++) {
    if (b[q] > t) {
      output[q] = t + 1;
      continue;
    } else {
      int low = 0, high = n - 1;
      int mid = 0, he = 0;
      while (low <= high) {
        mid = (low + high) / 2;
        he = a[mid] + b[q];
        if (he == t) {
          output[q] = 0;
          define = 0;
          break;
        } else if (he > t) {
          high = mid - 1;
        } else if (he < t) {
          low = mid + 1;
          output[q] = t -
              he;
          define = 0;
        }

      }
    }
  }
  int min = output[0];
  if (define == 0) {
    for (
        int f = 0;
        f < m;
        f++) {
      if (output[f] < min) {
        min = output[f];
      }
    }
    printf("%d\n", min);
  } else {
    printf("-1\n");
  }

  return 0;
}