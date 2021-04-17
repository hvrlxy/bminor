%{
#include "token.h"
%}
DIGIT [0-9]
LETTER [a-zA-Z]
CSTART "/*"
CEND  "*/"
%%
"/*"[^*]*[*]+([^*/][^*]*[*]+)*[/]   {  /*return TOKEN_COMMENT;*/ }
"//".*   	   { /*return TOKEN_COMMENT;*/ }
(" "|\t|\n) 	   /* skip whitespace */
\+\+   	    	   { return TOKEN_PLUSPLUS; }
\-\-   	    	   { return TOKEN_MINUSMINUS; }
\+   	    	   { return TOKEN_PLUS; }
\-   	    	   { return TOKEN_MINUS; }
\!   	    	   { return TOKEN_NOT; }
\*   	    	   { return TOKEN_MUL; }
\/   	    	   { return TOKEN_DIV; }
\^   	    	   { return TOKEN_EXPO; }
\%   	    	   { return TOKEN_MOD; }
:   	    	   { return TOKEN_COLON; }
;   	    	   { return TOKEN_SEMI; }
\(   	    	   { return TOKEN_LPAREN; }
\)   	    	   { return TOKEN_RPAREN; }
\{   	    	   { return TOKEN_LCURLY; }
\}   	    	   { return TOKEN_RCURLY; }
\[   	    	   { return TOKEN_LSQUARE; }
\]   	    	   { return TOKEN_RSQUARE; }
\<   	    	   { return TOKEN_LT; }
\<=   	    	   { return TOKEN_LTE ; }
\<   	    	   { return TOKEN_GT; }
\<=   	    	   { return TOKEN_GTE ; }
==   	    	   { return TOKEN_EQUALITY; }
==   	    	   { return TOKEN_EQUALITY; }
=   	    	   { return TOKEN_EQUAL; }
integer     	   { return TOKEN_INT; }
boolean     	   { return TOKEN_BOOL; }
char        	   { return TOKEN_CHAR; }
string	    	   { return TOKEN_STRING; }
for 	    	   { return TOKEN_FOR; }
while		   { return TOKEN_WHILE; }
if		   { return TOKEN_IF; }
else		   { return TOKEN_ELSE; }
array		   { return TOKEN_ARRAY; }
function	   { return TOKEN_FUNCTION; }
print		   { return TOKEN_PRINT; }
return		   { return TOKEN_RETURN; }
void		   { return TOKEN_VOID; }
true		   { return TOKEN_TRUE; }
false		   { return TOKEN_FALSE; }
void		   { return TOKEN_VOID; }
{LETTER}+   	   { return TOKEN_IDENT; }
{DIGIT}+    	   { return TOKEN_NUMBER; }
\'[^\']\'    	   { return TOKEN_ACTUALCHAR; }
\"[^\"]*\"    	   { return TOKEN_ACTUALSTRING; }
.	    	   { return TOKEN_ERROR; }
%%
int yywrap()	   { return 1; }


