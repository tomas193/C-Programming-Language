#include <stdio.h>

//copy input to its output, replacing each tab by \t, backspace by \b,
//and each blackslash by \\.

int main(){
  int c;
  while((c=getchar())!='.'){
    if(c=='\n'){
      putchar(92);
      putchar('n');}
    else{
      putchar(c);
      }
  }
}