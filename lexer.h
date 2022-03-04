#ifndef _H_LEXER
#define _H_LEXER

#include "token.h"
#include "function.h"

typedef struct _abstract_syntax_tree abstract_syntax_tree;
struct _abstract_syntax_tree
{
	TOKEN token;
	abstract_syntax_tree *left;
	abstract_syntax_tree *right;
};


#endif
