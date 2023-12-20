//
// Created by 13584 on 2023/12/6.
//
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define LR 16
#define LO 11
#define N 500
const char *reserved[LR] = {
    "const", "int", "float",
    "double", "long", "static",
    "void", "char", "extern",
    "return", "break", "enum",
    "struct", "typedef", "union",
    "goto"};
const char *operator[LO] = {
    "+", "-", "*", "/", "=", "==",
    "!=", ">=", "<=", ">", "<"};

char *output[N];
char stack[N];
int top=0;
int count = 0;
int flag = 1;

void process(char *str) {
  int len = strlen(str);
  int jud = 0;
  int det = 0;
  for (int i = 0; i < LR; ++i) {
    if (!strcmp(str, reserved[i])) {
      output[count++] = "reserved ";
      return;
    }
  }
  for (int i = 0; i < LO; ++i) {
    if (!strcmp(str, operator[i])) {
      output[count++] = "operator ";
      return;
    }
  }
  char tem;
  for (int i = 0; i < len; ++i) {
    if (isdigit(str[i]) != 0) {
      jud++;
      if (i) { det++; }
    } else { tem = str[i]; }
    if ((isalpha(str[i]) != 0) || (str[i] == '_')) { det++; }
  }
  if (jud == len) {
    output[count++] = "integer ";
    return;
  } else if ((jud == len - 1) && tem == '.') {
    output[count++] = "float ";
    return;
  }
  if (det == len) {
    output[count++] = "variable ";
    return;
  }
  flag = 0;
  return;
}
void fresh_stack(){
  for (int i = 0; i < top; ++i) {
    stack[i]='\0';
  }
}

int main() {
  char *s = malloc(sizeof(char) * N);
  const char *p=";";
  while (scanf("%s", s) != EOF) {
    for (int i = 0; i < strlen(s); ++i) {
      if (s[i]==';'){
        if(top)process(stack);
        output[count++]="\n";
        fresh_stack();
        top=0;
      } else{
        stack[top++]=s[i];
      }
    }
    if (top){ process(stack);fresh_stack();top=0;}
  }
  if (flag == 0) {
    printf("Compile Error");
    return 0;
  }
  int num = 0;
  while (count--) {
    printf("%s", output[num++]);
  }
  return 0;
}