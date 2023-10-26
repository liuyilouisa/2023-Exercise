//
// Created by 13584 on 2023/10/15.
//
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
  int n,len,sum,num[1000],i;
  char str[1000];
  scanf("%d",&n);
  while(n--)
  {
    sum = 0;
    scanf("%s",str);
    len = strlen(str);
    for(i = 0;i < len;i++)
    {
      if(str[i]=='Z')
        num[i] = -1;
      if(str[i]=='1')
        num[i] = 1;
      if(str[i]=='0')
        num[i] = 0;
      sum = sum + num[i]*pow(3,len-1-i);
    }
    printf("%d\n",sum);
  }
  return 0;
}