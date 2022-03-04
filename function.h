#ifndef _H_FUNCTION
#define _H_FUNCTION

#include "types.h"

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

#endif