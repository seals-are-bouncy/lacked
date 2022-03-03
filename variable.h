#ifndef _H_VARIABLE
#define _H_VARIABLE

#include "lexer.h"

typedef struct _VARIABLE_VALUE VARIABLE_VALUE; 
struct _VARIABLE_VALUE {
	enum TYPES type;

	int i;
	double d;
	char c;
	char *s;
};

#endif
