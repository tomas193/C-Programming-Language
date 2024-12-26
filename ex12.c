#include <stdio.h>

//write a program to count blanks,tabs, and newlines
int main(){
  int c, bks, tb, nl;
  while ((c=getchar())!='.'){
    if(c=='\n'){++nl;}
    if(c=='\t'){++tb;}
    if(c==' '){++bks;}
  }
  printf("saltos: %d\ntabs: %d\nespacios: %d",nl, tb, bks);
}