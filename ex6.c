#include <stdio.h>

//mi ejemplo corto con while
int main(){
  int fahr;
  fahr=0;
  while(fahr<=300){
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    fahr=fahr+20;
  }
}