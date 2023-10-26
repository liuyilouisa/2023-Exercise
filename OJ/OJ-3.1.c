#include <stdio.h>

int main(){
  int n=0;
  scanf("%d",&n);
  getchar();
  char s[2000];
  gets(s);
  for (int i=0,j=n-1;i<n;i++,j--){
    if(s[i]=='?'){
      s[i]=s[j];
    }
  }
  printf("%s\n",s);
  return 0;
}