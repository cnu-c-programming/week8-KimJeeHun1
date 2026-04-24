#include <stdio.h>

int my_strcmp(const char *a, const char *b){
  int a_sum=0;
  int b_sum=0;
  while(*a!=0){
    a_sum+=(*a++);
  }
  while(*b!=0){
    b_sum+=(*b++);
  }
  return a_sum-b_sum;
}

int main(){
  printf("%d\n", my_strcmp("abc", "abcd"));
  printf("%d\n", my_strcmp("abc", "abc"));
  printf("%d\n", my_strcmp("b","a"));
  return 0;
}

