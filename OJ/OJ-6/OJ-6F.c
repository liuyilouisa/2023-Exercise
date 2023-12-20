//
// Created by 13584 on 2023/11/18.
//
#include <stdio.h>
#include <math.h>

void paint(int l,int n,int x,int y,int *p);
int main(){
  int n;
  scanf("%d",&n);
  int l= pow(2,n+1);
  int h= pow(2,n);
  int a[h][l+1];
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < l; ++j) {
      a[i][j]=' ';
    }
  }
  int *p=a;
  paint(l+1,n,pow(2,n)-1,0,p);
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < l; ++j) {
      printf("%c",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
void paint(int l,int n,int x,int y,int *p){
  if (n==1){
    *(p+x+y*l)='/';
    *(p+x+y*l+1)='\\';
    *(p+l+x-1+y*l)='/';
    *(p+l+x+y*l)='_';
    *(p+l+x+y*l+1)='_';
    *(p+l+x+y*l+2)='\\';
  } else{
    --n;
    paint(l,n,x,y,p);
    paint(l,n,x-pow(2,n),y+pow(2,n),p);
    paint(l,n,x+pow(2,n),y+pow(2,n),p);
  }
}