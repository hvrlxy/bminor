#include "token.h"
#include <stdio.h>

/* This is a comment */

extern FILE *yyin;
extern int yylex();
extern int yyparse();
extern char *yytext;


int parse() {
  int retVal =  yyparse() ;
  printf("yyparse returned %d\n", retVal) ;
  return retVal ;
}


void scan() {
  /*   This is to scan the file and print the tokens
       This only makes sense in using if we are worried about our scanning working
  */
  while(1) {
    enum yytokentype t = yylex();
    if(t==TOKEN_EOF) break;
    switch (t) {
    case TOKEN_COMMENT : printf("token: %s text: %s\n","Comment:\t",yytext); break;
    case TOKEN_PLUS : printf("token: %s text: %s\n","PLUS:\t",yytext); break;
    case TOKEN_MINUS : printf("token: %s text: %s\n","MINUS:\t",yytext); break;
    case TOKEN_COLON : printf("token: %s text: %s\n","Colon:\t",yytext); break;
    case TOKEN_SEMI : printf("token: %s text: %s\n","Semi-colon:\t",yytext); break;
    case TOKEN_LPAREN : printf("token: %s text: %s\n","Left paren:\t",yytext); break;
    case TOKEN_RPAREN : printf("token: %s text: %s\n","Right paren:\t",yytext); break;
    case TOKEN_EQUAL : printf("token: %s text: %s\n","Equal sign:\t",yytext); break;
    case TOKEN_INT : printf("token: %s text: %s\n","Int:\t",yytext); break;
    case TOKEN_BOOL : printf("token: %s text: %s\n","Bool:\t",yytext); break;
    case TOKEN_CHAR : printf("token: %s text: %s\n","Char:\t",yytext); break;
    case TOKEN_STRING : printf("token: %s text: %s\n","String:\t",yytext); break;
    case TOKEN_WHILE : printf("token: %s text: %s\n","While:\t",yytext); break;
    case TOKEN_IDENT : printf("token: %s text: %s\n","Ident:\t",yytext); break;
    case TOKEN_NUMBER : printf("token: %s text: %s\n","Number:\t",yytext); break;
    case TOKEN_ACTUALSTRING : printf("token: %s text: %s\n","A string:\t",yytext); break;
    case TOKEN_ERROR : printf("token: %s text: %s\n","Error:\t",yytext); break;
    
    }
    //    printf("token: %d text: %s\n",t,yytext);
  }
}




int main(int argc , char *argv[]) {
  if(argc != 2){
    printf("Usage: %s <file to scan>\n", argv[0]);
    return 1 ; 
  }
  
  yyin = fopen(argv[1],"r");
  if(!yyin) {
    printf("could not open %s!\n", argv[1]);
    return 1;
  }

  parse();
  //scan() ; 

}

