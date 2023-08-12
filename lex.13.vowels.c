program:

%{
    int vow_count=0;
   
%}
 
%%
[aeiouAEIOU] {vow_count++;}
[a-zA-Z] {const_count++;}
%%
int yywrap(){}
int main()
{
    printf("Enter the string of vowels and consonants:");
    yylex();
    printf("Number of vowels are:  %d\n", vow_count);

    return 0;
}


output:

Enter the string of vowels and consonants:Hi hello this is vikaash from ts i am here in chennai.
           .
^Z
Number of vowels are:  17
