
%{
#include<stdio.h>
int wc=0,lc=0,cc=0;
%}

%%
[\n] { lc++;}
[^\t\n ]+ { wc++;  cc+=yyleng;}
[ ]+ { cc+=yyleng;}
%%

int main(int argc ,char* argv[ ])
{
        yyin=fopen("input.txt","r");
        yylex();
        printf("The number of lines=%d\n",lc);
        printf("The number of words=%d\n",wc);
        printf("The number of characters are=%d\n",cc);
}

int yywrap( )
{
        return 1;
}
