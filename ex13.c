#include <stdio.h>

//write a program to copy its input to its output, replacing
//each string of one or more blanks by a single blank.
int main(){
  int c,bk;

  while((c=getchar())!='.'){
    if(c!=' '){bk=0;putchar(c);}
    else{
      ++bk;
      if(bk==1){putchar(c);}
    }
  }
}