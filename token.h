#ifndef _H_TOKEN
#define _H_TOKEN

#include "variable.h"
#include "function.h"
#include "lexer.h"

enum TOKEN_TYPE {
	FUNCTION_DEFINITION,
	FUNCTION_CALL,
	VARIABLE_TYPE,
	VARIABLE_OPERAND,
	TYPE,
	STACK_TYPE,
	STACK_MEMBER_TYPE
};


typedef struct _TOKEN TOKEN;
struct _TOKEN {
	enum TOKEN_TYPE type;
	FUNCTION f;
	VARIABLE v;
};


#endif