#include <stdio.h>
#include <stdlib.h>

#define MESSAGE "Write Your Code"
#define MAX 100

int lines[8] = {0}; 
char brackets[] = { '{', '}', '[', ']', '(', ')', '<', '>' };
int open_brackets_queue[MAX];
int line_counter = 1, balance = 0, last_error;
int closed_bracket_index;
int mismatch_flag = 0; 
int open_brackets = 0;

void cases_brackets(char c);
void comparison(void);
void mismatch_log(void);
void initial_log(void);

int main(){
    
    int c;
    extern int line_counter;

    initial_log();
    printf("%d ", line_counter);
    while ( (c=getchar()) != '~' ){
        if (c == '\n'){ ++line_counter; printf("%d ", line_counter);}
        cases_brackets(c);
    }

    if ( mismatch_flag == 1){
        mismatch_log();
        return 0;
    }

    else if ( balance != 0 ){
        printf("\nMissing Bracket\n");
        return 0;
    }

    else{
        printf("\nExit Status 0\n");
    }

    return 0;
}

void initial_log(void){
    char program_name[] = MESSAGE;
    system("cls");
    printf("\n%s\n", program_name);
    int i=0;
    while ( program_name[i] != '\0' ){ printf( "-" ); ++i; }   
    printf("\n\n");
}

void mismatch_log(void){
    printf("\nMismatch: at line %d '%c'\n", lines[last_error]+1, brackets[open_brackets_queue[open_brackets-1]*2]);
}

void comparison(void){
    extern int mismatch_flag;
    extern int last_error;
    extern int open_brackets_queue[];
    extern int open_brackets;

    if ( open_brackets_queue[open_brackets-1] != closed_bracket_index){
        mismatch_flag = 1;
        last_error = lines[open_brackets*2];
    } 
    else {
        --open_brackets;
    }
}

void cases_brackets(char c) {
    extern int lines[];
    extern int balance;
    extern int closed_bracket_index;
    extern int open_brackets_queue[];
    extern int open_brackets;

    switch (c) {
        case '{':
            open_brackets_queue[open_brackets] = 0;
            ++balance; ++open_brackets;
            lines[0] = line_counter;
            break;
        case '}':
            --balance;
            closed_bracket_index = 0;
            comparison();
            lines[1] = line_counter;
            break;
        case '[':
            open_brackets_queue[open_brackets] = 1;
            ++balance; ++open_brackets;
            lines[2] = line_counter;
            break;
        case ']':
            --balance;
            closed_bracket_index = 1;
            comparison();
            lines[3] = line_counter;
            break;
        case '(':
            open_brackets_queue[open_brackets] = 2;
            ++balance; ++open_brackets;
            lines[4] = line_counter;
            break;
        case ')':
            --balance;
            closed_bracket_index = 2;
            comparison();
            lines[5] = line_counter;
            break;
        case '<':
            open_brackets_queue[open_brackets] = 3;
            ++balance; ++open_brackets;
            lines[6] = line_counter;
            break;
        case '>':
            --balance;
            closed_bracket_index = 3;
            comparison();
            lines[7] = line_counter;
            break;
        default: break;
    }
}
