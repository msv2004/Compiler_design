program: 

%%
[1-9][0-9]{9} {printf("\nMobile Number Valid\n");}
.+ {printf("\nMobile Number Invalid\n");}
%%
int main()
{
	printf("\nEnter Mobile Number : ");
	yylex();
	printf("\n");
	return 0;
}
int yywrap()
{ }


output:

Enter Mobile Number : 78945655556

Mobile Number Invalid

7418529630

Mobile Number Valid
