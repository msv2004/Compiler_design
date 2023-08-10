c program:

<html>
<body>
<h1>My First Heading</h1>
<p>My first paragraph.</p>
</body>
</html>


%{
int tags;
%}
%%
"<"[^>]*>  { tags++; printf("%s \n", yytext); }
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
printf("\n Number of html tags: %d",tags);
fclose(yyin);  
}


output:

Enter File Name : html.c
<html>
<body>
<h1>
</h1>
<p>
</p>
</body>
</html>

Number of html tags: 8
