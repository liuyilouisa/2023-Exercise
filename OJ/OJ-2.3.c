//
// Created by 13584 on 2023/10/10.
//
#include <stdio.h>
#include <math.h>

int main()
{
  int j,n;
  double x, sum, a=0;
  scanf("%lf %d", &x, &n);
  for (int i = 0; i <= n; i++){
    j=2*i+1;
    a += (pow(-1,i)*pow(x,j))/j;
  }
  sum = 4 * a;
  printf("%.10lf\n", sum);
  return 0;
}