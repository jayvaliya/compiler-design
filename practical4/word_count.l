%{
#include <stdio.h>
int word_count = 0;
%}

%%
[ \t\n]+          ;
[a-zA-Z0-9]+      { word_count++; }
.                 ;
%%

int main() {
    yylex();
    printf("Word count: %d\n", word_count);
    return 0;
}

int yywrap(void) {
    return 1;
}
