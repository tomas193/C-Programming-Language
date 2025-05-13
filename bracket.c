#include <stdio.h>

int main(){
    char program_name[] = "Syntax Verification";
    printf("\n%s\n", program_name);
    int i=0;
    while ( program_name[i] != '\0' ){ printf( "-" ); ++i; }   
    printf("\n\n");

    int c, balance;
    while ((c=getchar())!='~'){
    
    if ( c == '{' || c == '[' || c == '(' || c == '<' ){ ++balance; }
    else if ( c == '}' || c == ']' || c == ')' || c == '>' ){ --balance; }

    }

    if ( balance == 0 ){ printf("\nExit status 0\n"); }
    else { printf( "\nSyntax error\n" ); }

    return 0;
}
