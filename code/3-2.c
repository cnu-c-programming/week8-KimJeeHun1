#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
 for(int i=0; i<n-1; i++){
      for(int j=0; j<n-i-1; j++){
        if(strcmp(names[j], names[j+1]) > 0){
          char *temp = names[j];
          names[j] = names[j+1];
          names[j+1] = temp;
        }
      }
    
  }

  for(int i=1; i<argc; i++){
    printf("%s\n", argv[i]);
  }
  return 0;
}
