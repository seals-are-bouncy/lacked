#ifndef _H_ARGSS
#define _H_ARGSS

typedef struct _arguments arguments;
struct _arguments {
	int silent, amount, help;
	char *files[100]; // We're not evil right?
	char *output;
};

void parse_arguments(int argc, char **argv, arguments *a);

#endif
