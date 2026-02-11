%{
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
#include "module1.h"

#include <string.h>
int yylex(void);
void yyerror(const char *s);
int yyparse();
extern int lineno;
extern int errorinline;
int tree_flag=0;
int help_flag=0;

%}

%union {
    Node* node;
    char byte[5];
    int num;
    char type[6];
    char ident[64];
    char comp[3];
}


%define parse.error verbose

%token <type> TYPE
%token VOID IF ELSE WHILE RETURN OR AND  STRUCT
%token <comp> EQ ORDER
%token <ident> IDENT 
%token <num> NUM
%token <byte> ADDSUB DIVSTAR CHARACTER

%type <node> Prog Blockdecl DeclFoncts DeclVar DeclStruct Champs Champ
%type <node> TypeUse Declarateurs DeclFonct EnTeteFonct Corps Parametres ListTypVar
%type <node> SuiteInstr DeclVarLocal Instr Variable Exp ListExp Arguments
%type <node> TB  FB E F M T


%right THEN ELSE

%%


Prog:
        Blockdecl DeclFoncts            
                                        {
                                            $$ = makeNode(Prog);
                                            addChild($$, $1);
                                            addChild($$, $2);
                                            
                                            if (tree_flag){
                                                printTree($$);
                                            }
                                            deleteTree($$);
                                        }
    ;

Blockdecl:
        /* vide */                      {
                                            $$ = makeNode(Blockdecl);
                                        }
    |   Blockdecl DeclVar              {
                                                $$=$1;
                                                addChild($$,$2);
                                        }
    |   Blockdecl DeclStruct            {
                                            $$=$1;
                                            addChild($$,$2);
                                        }
    ;



DeclStruct:
        STRUCT IDENT '{' Champs '}' ';' 
                                        {
                                            $$=makeNode(DeclStruct);
                                            
                                            Node *child2=makeNode(IDENT_tok);
                                            child2->name=strdup($2);
                                            
                                            addChild($$,child2);
                                            addSibling(child2,$4);

                                        }
    ;

Champs:
        Champs Champ                    
                                        {
                                            $$=$1;
                                            addChild($$,$2);
                                        }   
    |   Champ                           
                                        {
                                            $$=makeNode(Champs);
                                            addChild($$,$1);
                                        }
    ;

Champ:
      TypeUse Declarateurs ';'  
                                        {
                                            $$=makeNode(Champ);
                                            addChild($$,$1);
                                            addChild($$,$2);
                                        }
    ;


TypeUse:
        TYPE                               
                                        {
                                            $$=makeNode(TypeUse);
                                            $$->name=strdup($1);

                                        }
    |   STRUCT IDENT                    {
                                            $$=makeNode(TypeUse);
                                            $$->name=strdup("struct");

                                            Node *child =makeNode(IDENT_tok);
                                            child->name=strdup($2);
                                            addChild($$,child);
                                        }
    ;

DeclVar:
      TypeUse Declarateurs ';'          {
                                            $$=makeNode(DeclVar);
                                            addChild($$,$1);
                                            addChild($$,$2);
                                            
                                        }
    ;

Declarateurs:
       Declarateurs ',' IDENT  
                                        {   
                                            
                                            Node *node = makeNode(IDENT_tok);
                                            node->name = strdup($3);
                                            addSibling($1,node);
                                             $$=$1;
                                        }     
    |  IDENT        
                                        {
                                            $$=makeNode(IDENT_tok);
                                            $$->name = strdup($1);
                                        }
    ;

DeclFoncts:
       DeclFoncts DeclFonct
                                        {
                                            $$=$1;
                                            addChild($$,$2);
                                        }
    |  DeclFonct        
                                        {
                                            $$=makeNode(DeclFoncts);
                                            addChild($$,$1);
                                        }
    ;

DeclFonct:
       EnTeteFonct Corps    
                                        {
                                            $$=makeNode(DeclFonct);
                                            addChild($$,$1);
                                            addSibling($1,$2);
                                        }
    ;

EnTeteFonct:
       TypeUse IDENT '(' Parametres ')'
                                        {
                                        $$=makeNode(EnTeteFonct);
                                        addChild($$,$1);
                                     
                                        Node *child2= makeNode(IDENT_tok);
                                        child2->name =strdup($2);
                                        addSibling($1,child2);
                                        addSibling(child2,$4);

                                    }    

    |  VOID IDENT '(' Parametres ')'
                                    {
                                        $$=makeNode(EnTeteFonct);
                                        Node *child1 =makeNode(VOID_tok);
                                        child1->name =strdup("void");
                                        addChild($$,child1);
                                        Node *child2= makeNode(IDENT_tok);
                                        child2->name =strdup($2);
                                        addSibling(child1,child2);
                                        addSibling(child2,$4);

                                    }    

    ;

Parametres:
       VOID                         {
                                        $$=makeNode(Parametres);
                                        Node *node=makeNode(VOID_tok);

                                        addChild($$,node);
                                    }
    |  ListTypVar                   {
                                        $$=makeNode(Parametres);
                                        addChild($$,$1);
                                    }
    ;

ListTypVar:
       ListTypVar ',' TypeUse IDENT 
                                    {
                                        
                                        Node *node2= makeNode(IDENT_tok);
                                        node2->name =strdup($4);
                                        $$ = $1;
                                        addChild($$, $3);
                                        addChild($3, node2); 

                                    }
    |  TypeUse IDENT                
                                    {
                                        $$=$1;
                                        Node *node= makeNode(IDENT_tok);
                                        node->name =strdup($2);
                                        addChild($$,node); 
                                    }
    ;

Corps:
       '{' DeclVarLocal SuiteInstr '}'
                                    {
                                        $$=makeNode(Corps);
                                        $$ = makeNode(Corps);
                                        if ($2) addChild($$, $2);
                                        if ($3) addChild($$, $3);
                                        if (!($2 || $3)) {
                                            deleteTree($$);
                                            $$ = NULL;
                                        }

                                    }
    ;

DeclVarLocal:
                                {
                                    $$=makeNode(DeclVarLocal);
                                }
    | DeclVarLocal DeclVar      {
                                    $$=$1;
                                    addChild($$,$2);
                                }
    | DeclVarLocal DeclStruct    {
                                    $$=$1;
                                    addChild($$,$2);    
                                }
    
    ;

SuiteInstr:
       SuiteInstr Instr         {
                                    $$=$1;
                                    addChild($$,$2);
                                }
    |                            
                                {
                                    $$=makeNode(SuiteInstr);
                                }
    ;
Instr:
      Variable '=' Exp ';'
                                {
                                    $$ = makeNode(assign);
                                    $$->name = strdup("=");
                                    addChild($$, $1);
                                    addChild($$, $3);  
                                }
    |  IF '(' Exp ')' Instr %prec THEN 
                                {
                                    $$=makeNode(IF_tok);
                                    addChild($$,$3);
                                    addChild($$,$5);
                                }
    |  IF '(' Exp ')' Instr ELSE Instr
                                {
                                    $$=makeNode(IF_tok);
                                    Node *node_else = makeNode(ELSE_tok);
                                    addChild($$, $3);   // condition
                                    addChild($$, $5);   // then
                                    addChild($$, node_else);
                                    addChild(node_else, $7);

                                }
    |  WHILE '(' Exp ')' Instr
                                {
                                    $$=makeNode(WHILE_tok);
                                    addChild($$,$3);
                                    addChild($$,$5);                                            
                                }
    |  IDENT '(' Arguments ')' ';'
                                {
                                    $$=makeNode(IDENT_tok);
                                    $$->name =strdup($1);
                                    addChild($$,$3);
                                }
    |  RETURN Exp ';'          
                                {
                                    $$=makeNode(RETURN_tok);
                                    addChild($$,$2);
                                }
    |  RETURN ';'
                                {
                                     $$= makeNode(RETURN_tok) ;
                                }
    |  '{' SuiteInstr '}'   
                                {
                                     $$ = $2;
                                }
    |  ';'
                                {
                                    $$=NULL;
                                }
    ;

Variable:
        Variable '.' IDENT  
                               {
                                if($1){
                                    $$=$1;
                                    Node *field = makeNode(IDENT_tok);
                                    field->name = strdup($3);
                                    addChild($$, field);
                                    } 
                                else
                                    $$=NULL;
                                }

    |   IDENT                   {
                                $$ = makeNode(Variable);
                                Node *node = makeNode(IDENT_tok);
                                node->name=strdup($1);
                                addChild($$,node);
                                }
            ;

Exp :  Exp OR TB
               {
                      $$=makeNode(OR_tok);
                      
                      addChild($$, $1);
                      addChild($$, $3);

                }
    |  TB
                {
                    $$=$1   ;
                }
    ;

TB  :  TB AND FB
                {
                      $$=makeNode(AND_tok);
                    
                      addChild($$, $1);
                      addChild($$, $3);

                }
    |  FB
                {
                    $$=$1   ;
                }
    ;

FB  :  FB EQ M
                {
                      $$=makeNode(EQ_tok);
                      $$->name=strdup($2);
                      addChild($$, $1);
                      addChild($$, $3);

                }
    |  M
                {
                    $$=$1   ;
                }
    ;

M   :  M ORDER E
                {
                      $$=makeNode(ORDER_tok);
                      $$->name=strdup($2);
                      addChild($$, $1);
                      addChild($$, $3);

                }
    |  E
                {
                    $$=$1   ;
                }
    ;

E   :  E ADDSUB T 
                {
                      $$=makeNode(ADDSUB_tok);
                      $$->name=strdup($2);
                      addChild($$, $1);
                      addChild($$, $3);

                }
    |  T    
                {
                    $$=$1  ; 
                }
    ;

T   :  T DIVSTAR F {
                    $$= makeNode(DIVSTAR_tok);
                    $$->name=strdup($2);
                    addChild($$,$1);
                    addChild($$,$3);
                    }
    |  F            {
                    $$=$1;
                    }
    ;

F:
      ADDSUB F  {
                    Node *op = makeNode(ADDSUB_tok);
                    op->name = strdup($1);  // + ou -
                    addChild(op, $2);
                    $$ = op;;
                }
    | '!' F     {
                $$=makeNode(not);
                addChild($$,$2) ;
                }
        
    | '(' Exp ')'  {
                    $$=$2;
                    }
        
    | NUM               {
                        $$=makeNode(NUM_tok);
                        $$->isnum = 1;
                        $$->val=$1;
                        } 
    | CHARACTER         {
                        $$=makeNode(CHARACTER_tok);
                        $$->name=strdup($1);
                        }   
    | IDENT '(' Arguments ')'  {
                                $$=makeNode(IDENT_tok);
                                $$->name=strdup($1);
                                addChild($$,$3);
                                } 
    | Variable         {    
                        $$=$1;
                        }
    ;

Arguments:
       ListExp      {
                     $$=makeNode(Arguments);
                     
                     addChild($$,$1);
                    
                    }

    |               {
                    $$=makeNode(Arguments);
                    Node *child =makeNode(VOID_tok) ;
                    child->name=strdup("void");
                    addChild($$,child);
                    }
    ;

ListExp:
       ListExp ',' Exp      {
                                addSibling($1,$3);
                            }
    |  Exp                  {
                                $$=$1;
                            }
    ;

%%

void yyerror(const char *s){
    fprintf(stderr, "Erreur syntaxique à la ligne %d , colonne %d : %s\n", lineno,errorinline, s);
}


int main(int argc, char *argv[]) {
    if (read_option(argc, argv) == 1){
        fprintf(stderr, "option do not exists\n");
        return 3;
    }
    if (help_flag){
        print_synopsis();
        return 3;
    }
    if (argc > 1 && !last_is_option(argc, argv)){
        freopen(argv[argc - 1], "r", stdin);
    }
    
    // Si pas de fichier spécifié, utiliser stdin (comportement par défaut)
    // yyin est déjà initialisé à stdin par défaut
    
    int result = yyparse();
    
    // Retourner directement le résultat sans message
    // 0 = succès, 1 = erreur syntaxique
    return result;
}
