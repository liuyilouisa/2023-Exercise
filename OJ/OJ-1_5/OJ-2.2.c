//
// Created by 13584 on 2023/10/9.
//
#include <stdio.h>

int main()
{
  int n;
  long pi;
  long sigma = 0;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    pi = 1;
    for (int j = 1; j <= i; j++)
    {
      pi *= j % 10007;
      if (pi > 10007)
        pi = pi % 10007;
    }
    sigma += pi;
    if (sigma > 10007)
      sigma = sigma % 10007;
  }
  printf("%ld\n", sigma);
  return 0;
}
