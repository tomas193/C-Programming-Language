#include <stdio.h>

//count characters
int main(){
  long nc;
  int c;
  nc=0;
  while((c=getchar())!='\n'){
    if(c!=' '){
      ++nc;
    }
  }
  printf("letras: %ld\n",nc);

  double nn;
  for(nn=0; getchar() != '\n';++nn)
    ; //null statement
  printf("letras: %1.0f\n", nn);
}