#include <stdio.h>
#include <string.h>

int main(){
  char *p = "hello";
  char arr[] = "hello";

  printf("%zu %zu\n", sizeof(p), strlent(p));
  printf("%zu %zu\n", sizeof(arr), strlent(arr));
 return 0;
}
