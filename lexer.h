#ifndef _H_LEXER
#define _H_LEXER

//#include "function.h"

//struct FUNCTION_ARGUMENT;

enum TOKEN_TYPE {
	FUNCTION_DEFINITION,
	FUNCTION_CALL,
	VARIABLE_TYPE,
	VARIABLE_OPERAND,
	TYPE,
	STACK_TYPE,
	STACK_MEMBER_TYPE
};

enum TYPES {
	VOID,
	INT,
	INT32,
	INT_64,
	UINT,
	UINT_32,
	UINT_64,
	FLOAT,
	UFLOAT,
	DOUBLE,
	DOUBLE_16,
	DOUBLE_32,
};

enum VARIABLE_OPERANDS {
	DEFINITION,

	INCREMENT,
	DECREMENT,
};

typedef struct _FUNCTION_ARGUMENT FUNCTION_ARGUMENT;
struct _FUNCTION_ARGUMENT {
	enum TYPES type;
	char *name;
	char *mem_address; // unsure if I need this.
	
};

typedef struct _FUNCTION FUNCTION;
struct _FUNCTION {
	enum TYPES return_type;
	FUNCTION_ARGUMENT fa[99]; // No one will go over 99 arguments, right?
};

typedef struct _VARIABLE VARIABLE;
struct _VARIABLE {
	enum TYPES type;
};

typedef struct _TOKEN TOKEN;
struct _TOKEN {
	enum TOKEN_TYPE type;
	FUNCTION f;
	VARIABLE v;
};

#endif
