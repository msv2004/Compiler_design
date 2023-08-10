c program

#define PI 3.14   
#include<stdio.h> 
#include<conio.h>
   void main()
{
int a,b,c = 45;
printf("hello");
}

%{
int yylineno;
%}
%%
^(.*)\n printf("%4d\t%s", ++yylineno, yytext);
%%
int yywrap(void) {
return 1;
}
int main(int argc, char *argv[]) {
yyin = fopen(argv[1], "r");
yylex();
fclose(yyin);
}


output:

C:\Users\sse\Desktop\lex>a.exe addline1.c
   1    #define PI 3.14
   2    #include<stdio.h>
   3    #include<conio.h>
   4       void main()
   5    {
   6    int a,b,c = 45;
   7    printf("hello");
   8    }
