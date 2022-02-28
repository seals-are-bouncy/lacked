#include <stdio.h>
#include "argss.h"

int main(int argc, char **argv) {
	arguments a;
	a.silent = 0;
	a.amount = 0;
	a.help = 0;
	a.output = "";
	parse_arguments(argc, argv, &a);

	if(a.amount == 0 && a.help == 0 && a.silent == 0) {
		printf("ERROR: No source files added.\n");
	} else {
		for(int i = 0; i < a.amount; i++) {
			printf("%s\n", a.files[i]);
		} 
	}
}
