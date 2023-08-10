Program:

(capital.l)
%%
[A-Z]+[\t\n ] { printf("%s is a capital word\n",yytext); }
.  ;
%%

int main( ) 
{
	printf("Enter String :\n");
	yylex();
}
int yywrap( )
{
	return 1;
}

Output:

Enter String :
CAPITAL of INDIA is DELHI
CAPITAL  is a capital word
INDIA  is a capital word
DELHI is a capital word
