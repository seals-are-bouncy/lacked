#ifndef _H_STACK
#define _H_STACK

#include "lexer.h"

#define MAX_STACK 4028

typedef struct _STACK_MEMBER STACK_MEMBER;
struct _STACK_MEMBER {
	int i;
	enum TYPES type;
	
	char *name;
};

typedef struct _STACK STACK;
struct _STACK {
	int i; // We need the index of the stack.
	STACK_MEMBER members[MAX_STACK];
};

#endif
