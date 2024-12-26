#include <stdio.h>

//histograma de frecuencias longitud de las palabras
int main(){
  int c, lon;
  int fq[10];
  lon=0;
  while((c=getchar())!='.'){
   if(c==' ' || c=='\n' || c==','){
    if(lon>0){++fq[lon-1];}
    lon=0;}
   else{++lon;}
  }
  printf("\nhistograma de longitud de palabras: \n");
  for(lon=0;lon<10;++lon){
    printf("\n%3d | ", lon+1);
    for(int i=1;i<=fq[lon];++i){
      printf("-");
    }
    }
}