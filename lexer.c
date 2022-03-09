#include "lexer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "util.h"

void lex_anal(char *s)
{
		printf("Starting lexical analysis.\n");

		union lexer {
			bool in_statement;
			bool in_preprocessor;
		} lex;
		lex.in_statement = false;

    for (size_t i = 0; i < strlen(s); i++)
    {
				// check for tokens
				if(lex.in_statement == false) {
					if(s[i] == '-' && s[i + 1] == '-') {
						i += 2;
							char t[FILENAME_MAX];
							int ti = 0;
						for (size_t j = i; j < strlen(s); j++) {
							//i++;
							if(s[j] != '\n') {
								t[ti++] = s[j];
							} else {
								break;
							}
						}
						i += ti;
						printf("\nPREPROCESSOR%s\n", t);
					}
				}

				// print
        printf("%c", s[i]);
		}
}
