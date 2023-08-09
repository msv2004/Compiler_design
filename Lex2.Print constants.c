c program

#define P 314  

#include<stdio.h> #include<conio.h>

 void main()

{

            int a,b,c = 30;

printf("hello");

}

Program: (countconstants.l)

digit [0-9]

%{

int cons=0;

%}

%%

{digit}+ { cons++; printf("%s is a constant\n", yytext);  }

.|\n { }

%%

int yywrap(void) {

return 1; }

int main(void)

{

FILE *f;

char file[10];

printf("Enter File Name : ");

scanf("%s",file);

f = fopen(file,"r");

yyin = f;

yylex();

printf("Number of Constants : %d\n", cons);

fclose(yyin);  

}



Output:



G:\lex>flex countconstants.l
G:\lex>gcc lex.yy.c
G:\lex>a.exe

Enter File Name : sample.c

314 is a constant

30 is a constant

Number of Constants : 2



G:\lex>
