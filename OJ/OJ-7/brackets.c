//
// Created by 13584 on 2023/11/21.
//
#include <stdbool.h>
#include <stdio.h>

#define STACK_SIZE 100000
char contents[STACK_SIZE];
int top = 0;
char tem='1';

void stack_overflow(){
  return;
}
void stack_underflow(){
  return;
}
void make_empty(void)
{
  top = 0;
}
bool is_empty(void)
{
  return top == 0;
}
bool is_full(void)
{
  return top == STACK_SIZE;
}
void push(int i)
{
  if (is_full())
    stack_overflow();
  else
    contents[top++] = i;
}
int pop(void)
{
  if (is_empty())
    stack_underflow();
  else
    return contents [--top];
}

int brackets(){
  for (; tem!='\n'; ) {
    scanf("%c",&tem);
    if (tem=='\n'){
      if(is_empty()){
        printf("True\n");
        return 1;
      } else {
        printf("False\n");
        return 0;
      }
    }
    if (tem=='('){
      push(tem);
    } else if(tem=='{'){
      push (tem);
    } else if (tem=='['){
      push(tem);
    }
    if(is_empty()||is_full()){
      printf("False\n");
      return 0;
    }
    if (tem==')'){
      if (pop()!='('){
        printf("False\n");
        return 0;
      }
    }
    if (tem==']'){
      if (pop()!='['){
        printf("False\n");
        return 0;
      }
    }
    if (tem=='}'){
      if (pop()!='{'){
        printf("False\n");
        return 0;
      }
    }
  }
}

int main(){
  int n=0;
  scanf("%d",&n);
  getchar();
  for (int i = 0; i < n; ++i) {
    make_empty();
    for (int j = 0; j < STACK_SIZE; ++j) {
      contents[j]='\0';
    }
    tem='1';
    brackets();
    if (tem!='\n'){
      char temp='1';
      while(temp!='\n'){
        scanf("%c",&temp);
      }
    }
  }
  return 0;
}