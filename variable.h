#ifndef _H_VARIABLE
#define _H_VARIABLE

#include "types.h"
#include "lexer.h"

enum VARIABLE_OPERANDS {
	DEFINITION,

	INCREMENT,
	DECREMENT,
};

typedef struct _VARIABLE VARIABLE;
struct _VARIABLE {
	enum TYPES type;
};


typedef struct _VARIABLE_VALUE VARIABLE_VALUE; 
struct _VARIABLE_VALUE {
	enum TYPES type;

	int i;
	double d;
	char c;
	char *s;
};

#endif
