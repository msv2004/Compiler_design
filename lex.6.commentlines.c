c program

#include<stdio.h> 
int main()
{
int a,b,c; /*varible declaration*/ 
printf(“enter two numbers”);
scanf(“%d %d”,&a,&b); 
c=a+b; //adding two numbers
a=b+c; //adding
printf(“sum is %d”,c);
return 0;
}

%{
int com=0;
%}
%s COMMENT
%%
"/*" {BEGIN COMMENT;}
<COMMENT>"*/" {BEGIN 0; com++;}
<COMMENT>\n {com++;}
<COMMENT>. {;}
\/\/.* {; com++;}
.|\n {fprintf(yyout,"%s",yytext);}
%%
void main(int argc, char *argv[])
{
if(argc!=3)
{
printf("usage : a.exe input.c output.c\n");
exit(0);
}
yyin=fopen(argv[1],"r");
yyout=fopen(argv[2],"w");
yylex();
printf("\n number of comments are = %d\n",com);
}
int yywrap()
{
return 1;
}

output:

usage : a.exe input.c output.c
  a.exe input.c output.c
   number of comments are = 2
