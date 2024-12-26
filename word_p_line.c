#include <stdio.h>

//print its input one word per lines
int main(){
  int c;

  while((c=getchar())!='.'){
    if(c==' '){putchar('\n');}
    else{putchar(c);}
  }
}