program: 

%%
((http)|(ftp))s?:\/\/[a-zA-Z0-9](.[a-z])+(.[a-zA-Z0-9+=?]*)* {printf("\nURL Valid\n");}

.+ {printf("\nURL Invalid\n");}

%%
void main()
{
	printf("\nEnter URL : ");
	yylex();
	printf("\n");
}
int yywrap()
{
}


ouput:


Enter URL : www.google.com

URL Invalid

https://www.google.com

URL Valid
