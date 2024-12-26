#include <stdio.h>
#define IN  1 /*inside a word*/
#define OUT 2 /*outside a word*/

//count lines, words and characters
int main(){
  int c,nl,wd,ch,state;

  state=OUT;
  nl=wd=ch=0;
  while((c=getchar())!='.'){
    if(c!=' ' && c!='\n' && c!='\t'){
      ++ch;
      if (nl==0){++nl;}
      if (state==OUT){++wd;state=IN;}}
    else{state=OUT;}
    if(c=='\n' && ch>0){++nl;}
  }
  printf("\nlineas: %d\ncaracteres: %d\npalabras: %d", nl, ch, wd);
}