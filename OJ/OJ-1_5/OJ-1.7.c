//
// Created by 13584 on 2023/9/26.
//
#include <stdio.h>
#include <math.h>>

int main(){
    int p,q;
    double i,j,x1;
    scanf("%d %d",&p,&q);
    i=p/3.0;
    j=q/2.0;
    x1= cbrt(-j+ sqrt(i*i*i+j*j))+ cbrt(-j-sqrt(i*i*i+j*j));
    printf("%.3lf\n",x1);

    return 0;

}