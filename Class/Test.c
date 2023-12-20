//
// Created by 13584 on 2023/10/31.
//
#include <stdio.h>
//递归
//
//joseph ring
//
//int jo(int n,int k){
//  if (n==1){
//    return 0;
//  } else {
//    return (jo(n-1,k)+k)%n;
//  }
//}
//int main (){
//  int n,k;
//  scanf("%d %d",&n,&k);
//  printf("%d\n",jo(n,k)+1);
//  return 0;
//}

//
//Binary Search
//
//int BiSearch(int arr[],int len,int key);
//int main(){
//
//  return 0;
//}

//
//MergeSort
//
//void merge(int arr, int start, int mid, int end);//合并排序
//void mergeSort(int arr, int start, int end) {
//  while (start < end) {
//    int mid = (start + end) / 2;
//    //左半排序
//    mergeSort(arr, start, mid);
//    //右半排序
//    mergeSort(arr, mid, end);
//    //合并
//    merge(arr, start, mid, end);
//  }
//}