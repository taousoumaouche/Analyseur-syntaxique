/* tree.h */

typedef enum {
    Prog,
    Blockdecl,
    ListDecl,
    DeclVar,
    DeclStruct,
    Champs,
    Champ,
    TypeUse,
    Declarateurs,
    DeclFoncts,
    DeclFonct,
    EnTeteFonct,
    Corps,
    Parametres,
    ListTypVar,
    DeclVarLocal,
    SuiteInstr,
    Instr,
    Variable,
    Exp,
    TB,
    FB,
    M,
    E,
    T,
    F,
    Arguments,
    ListExp,
    assign,
    not,
    /* TERMINAUX utiles pour l’arbre */
    TYPE_tok,
    VOID_tok,
    IF_tok,
    ELSE_tok,
    WHILE_tok,
    RETURN_tok,
    OR_tok,
    AND_tok,
    STRUCT_tok,
    EQ_tok,
    ORDER_tok,
    IDENT_tok,
    NUM_tok,
    ADDSUB_tok,
    DIVSTAR_tok,
    CHARACTER_tok,

    
} label_t;


typedef struct Node {
  label_t label;
  struct Node *firstChild, *nextSibling;
  int lineno;
  int val;
  int isnum;
  char *name;
} Node;

extern int lineno; // ca vient de lexer

Node *makeNode(label_t label);
void addSibling(Node *node, Node *sibling);
void addChild(Node *parent, Node *child);
void deleteTree(Node*node);
void printTree(Node *node);

#define FIRSTCHILD(node) node->firstChild
#define SECONDCHILD(node) node->firstChild->nextSibling
#define THIRDCHILD(node) node->firstChild->nextSibling->nextSibling
