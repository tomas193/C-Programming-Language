#include <stdio.h>

//histograma de frecuencias distintos caracteres
int main(){
  int c;
  int fq[95]={0};
  while((c=getchar())!='.'){++fq[c-32];}

  for(int i=0;i<95;++i){
    if(fq[i]>0){
      printf("\n'");putchar(i+32);printf("' | ");
      for(int k=1;k<=fq[i];++k){printf("-");}
    }
  }
}