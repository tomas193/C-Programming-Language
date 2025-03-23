#include <stdio.h>
#define MAXLEN 50

void reverse(char *word, int *index);
void input(char *word, int *index);

int main(){
    char word[MAXLEN] = {0};
    int index;
    
    input(word, &index);
    reverse(word, &index);
    printf("reversed: %s \n",word);
    return 0;
}

void input(char *word, int *index){
    *index=0;
    int c;
    while ((c=getchar())!='\n' && *index<MAXLEN){
        word[*index] = c;
        ++(*index);
    }
}

void reverse(char *word, int *index){
    int aux, div = *index/2;
    for (int i=0; i<div; ++i){ 
      	aux = word[(*index)-i-1];
      	word[(*index)-i-1] = word[i];
      	word[i] = aux;
    }
    word[*index] = '\0';
} 
