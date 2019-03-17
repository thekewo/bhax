%{
#include <stdio.h>
int valos_szam = 0;
%}
numb	[0-9]
%%
{numb}*(\.{numb}+)?	{++valos_szam; 
    printf("[realnum=%s %f]", yytext, atof(yytext));}
%%
int
main ()
{
 yylex ();
 printf("The number of real numbers is %d\n", valos_szam);
 return 0;
}

