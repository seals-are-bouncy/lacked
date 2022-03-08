#include "lexer.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "util.h"

void lex_anal(char *s)
{
		printf("Starting lexical analysis.\n");

    union lexer
    {
				bool is; // In something
        bool pp; // Preprocessor

        char *tk; // Token string.

        char pc; // Previous character
    } lex;

		lex.is = false;
		lex.pp = false;
		lex.tk = "";
		lex.pc = '\0';

    for (size_t i = 0; i < strlen(s); i++)
    {
        if (lex.is == false)
        {
            if (lex.pp == false)
            {
                if (s[i] == '-' && s[i + 1] == '-')
                {
										//printf("PREPROCESSOR\n");
                    lex.pp = true;
										i++;
                }
            }
            else
            {
								printf("\nInside preprocessor.\n");
                if(s[i] == '-' && s[i + 1] == '-')
                {
                    lex.pp = false;
										printf("\nPreprocessor");
                }
                strcat_c(lex.tk, s[i]);
            }
        }

        printf("%c", s[i]);

        // Set previous character to current character
        lex.pc = s[i];
    }
}
