  program: 

%%
[0-9]+ {printf("\nValid digit \n");} 
.* printf("\nInvalid digit\n");
%%
int yywrap(){}
int main()											
{
yylex();
return 0;
}


output:

789

Valid digit

201d

Invalid digit
