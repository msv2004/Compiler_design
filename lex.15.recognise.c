program: 

%%
[\t ]+ ;
[0-9]+|[0-9]*\.[0-9]+ { printf("\n%s is NUMBER", yytext);}
#.* { printf("\n%s is COMMENT", yytext);}
[a-zA-Z]+ { printf("\n%s is WORD", yytext);}
\n { ECHO;}
%%
int main()
{
	while( yylex());
}

int yywrap( )
{
	return 1;
}


output: 

vikaash born in 2004

vikaash is WORD
born is WORD
in is WORD
2004 is NUMBER
