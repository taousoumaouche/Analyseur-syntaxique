%option nounput
%option noinput
%option noyywrap
%x COMMENT

%{
#include "tree.h"
#include "le_parser.h"
int lineno=1;
int errorinline=1;
#include <stdio.h>
#include <stdlib.h>
%}

%%

"//".*  {/*ingnorer les commentaires//*/}

"/*"  {BEGIN (COMMENT);}
<COMMENT>"*/" {BEGIN(INITIAL);}
<COMMENT>(.|\r|\t) ;
<COMMENT>\n  {lineno++;} 

\'\\[nt'\\]\'      {errorinline+= yyleng;strcpy(yylval.byte,yytext); return CHARACTER; }
\'(\\.|[^\\'])\'   {errorinline+= yyleng;strcpy(yylval.byte,yytext); return CHARACTER; }



[0-9]+ {yylval.num =atoi(yytext); return NUM;}

"struct"  { errorinline+= yyleng;return STRUCT;}
"int"|"char" {errorinline+= yyleng;strcpy(yylval.type,yytext); return TYPE;}
"if"        {errorinline+= yyleng; return IF; }
"else"      { errorinline+= yyleng;return ELSE; }
"return"    {errorinline+= yyleng; return RETURN; }
"void"      { errorinline+= yyleng; return VOID;}
"while"     { errorinline+= yyleng;return WHILE;}

[a-zA-Z_][a-zA-Z0-9_]* {errorinline+= yyleng;strcpy(yylval.ident,yytext); return IDENT;}

"=="|"!=" { errorinline+= yyleng ; strcpy(yylval.comp,yytext); return EQ;}
"<"|"<="|">"|">=" {errorinline+= yyleng; strcpy(yylval.comp,yytext); return ORDER;}

"+"|"-" {errorinline+= yyleng; strcpy(yylval.byte,yytext); return ADDSUB;}
"*"|"/"|"%" {errorinline+= yyleng; strcpy(yylval.byte,yytext); return DIVSTAR;}

"||" { errorinline+= yyleng; return OR;}
"&&" {errorinline+= yyleng; return AND;}

[;=\(\)\{\},!.]    { errorinline+=yyleng;return yytext[0]; }

[ \t\r]+ {}
\n { errorinline = 0;lineno++;} 
<<EOF>>                     { errorinline = 0; return 0; }
. {  return 0; }


%%