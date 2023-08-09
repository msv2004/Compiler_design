c program

#include <stdio.h>

 int main() 

 {    

      int number1, number2, sum;

 printf("Enter two integers: ");

 scanf("%d %d", &number1, &number2);

 sum = number1 + number2;      

      printf("%d + %d = %d", number1, number2, sum);

  return 0;

 }


 
Program: (count_lines.l)

%{

int nchar, nword, nline;

%}

%%

\n { nline++; nchar++; }

[^ \t\n]+ { nword++, nchar += yyleng; }

. { nchar++; }

%%

int yywrap(void) {

return 1;

}

int main(int argc, char *argv[]) {

yyin = fopen(argv[1], "r");

yylex();

printf("Number of characters = %d\n", nchar);

printf("Number of words = %d\n", nword);

printf("Number of lines = %d\n", nline);

fclose(yyin);

}




Output:

G:\lex>flex count_line.l
G:\lex>gcc lex.yy.c
G:\lex>a.exe sample.c

Number of characters = 233
Number of words = 33
Number of lines = 10
G:\lex>
