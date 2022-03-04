#include "argss.h"
#include <stdio.h>
#include <string.h>

void usage(arguments *a) {
	printf("usage: ll [-s] [-v] [-?] [-o file] file(s)\n");
	printf("-s				omit all output\n");
	printf("-v				print the version\n");
	printf("-?				print this screen\n");
	printf("-o <file>			set the output file\n");

	a->help = 1;
}

void parse_arguments(int argc, char **argv, arguments *a) {
	if(argc == 1) usage(a);
	for (int i = 1; i < argc && a->help == 0; i++) {
		//printf("%s\n", argv[i]);
		if( argv[i][0] == '-' ) {
			switch (argv[i][1]) {
				case 's':
					a->silent = 1;
					//printf("silent\n");
					break;
				case 'v':
					printf("ll version 0.0.1 compiled on %s\n", __DATE__);
					a->help = 1;
					break;
				case '?':
				case 'h':
					usage(a);
					break;
				case 'o': 
					++i;
					//printf("o %s\n", argv[i]);
					a->output = argv[i];
					break;
				case '-':
					if(strcmp(argv[i], "--help")) {
						usage(a);
					}
					break;
				default:
					usage(a);
					break;
			} 
		} else {
				a->files[a->amount++] = argv[i];
		}
	}
}
