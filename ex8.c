#include <stdio.h>
//example using define for constants

//#define name replacement text

#define LOWER 0     // por convencion los define van en mayuscula
#define UPPER 300   // para no confundirse con las variables
#define STEP  20

int main(){
  int fahr;
  for (fahr=LOWER; fahr<=UPPER; fahr=fahr+STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}