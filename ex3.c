#include <stdio.h>

//Ejemplo con enteros y numero especifico de bits por cada numero
int main(){
  int fahr, celsius;
  int lower, upper, step;

  lower=0;
  upper=300;
  step=20;

  fahr=lower;
  while (fahr <= upper){
    celsius=5*(fahr-32)/9;
    printf("%3d\t%6d\n", fahr, celsius);
    fahr=fahr+step;
  }
}
//En este ejemplo se utilizo un numero especifico de bits para cada numero para ordenar la salida