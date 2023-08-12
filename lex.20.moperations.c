program: 

%{
#undef yywrap
#define yywrap() 1 
int f1=0,f2=0;
char oper;
float op1=0,op2=0,ans=0;
void eval();
%}

DIGIT [0-9]
NUM {DIGIT}+(\.{DIGIT}+)?
OP [*/+-]

%%

{NUM} {
	if(f1==0)
	{
		op1=atof(yytext);
		f1=1;
	}

	else if(f2==-1)
	{
		op2=atof(yytext);
		f2=1;
	}

	if((f1==1) && (f2==1))
	{
		eval();
		f1=0;
		f2=0;

	}
}

{OP} {
	
	oper=(char) *yytext;
	f2=-1;
}

[\n] {

	if(f1==1 && f2==1)
	{	
		eval;
		f1=0;
		f2=0;
	}
}	

%%


int main()
{
	yylex();
}


void eval()
{
	switch(oper)
	{
		case '+':
			ans=op1+op2;
			break;

		case '-':
			ans=op1-op2;
			break;

		case '*':
			ans=op1*op2;
			break;

		case '/':
			if(op2==0)
			{
				printf("ERROR");
				return;
			}
			else
			{
				ans=op1/op2;
			}
			break;
		default:
			printf("operation not available");
			break;
	}
	printf("The answer is = %lf",ans);
}


ouput: 


41+5
The answer is = 46.000000

78/9*5-4+3
The answer is = 8.666667The answer is = 1.000000

741/85*96-123+7
The answer is = 744.000000The answer is = 8160.000000The answer is = 130.000000
