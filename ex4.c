#include <stdio.h>

//floating-point version while
int main(){
  float fahr, celsius;
  int lower, upper, step;

  lower=0;
  upper=300;
  step=20;

  fahr=lower;
  while (fahr <= upper){
    celsius=(5.0/9.0)*(fahr-32);
    printf("%3.0f\t%6.2f\n", fahr, celsius); //%6.1f indica 6 caracteres de entero y 1 decimal
    fahr=fahr+step;
  }
}