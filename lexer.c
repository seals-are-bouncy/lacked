#include "lexer.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "util.h"

void lex_anal(char *s)
{
    union lexer
    {
        bool is; // In something
        bool pp; // Preprocessor

        char *tk; // Token string.

        char pc; // Previous character
    } lex;

    for (size_t i = 0; i < strlen(s); i++)
    {
        if (!lex.is)
        {
            if (!lex.pp)
            {
                if (s[i] == '-' && lex.pc == '-')
                {
                    lex.pp = true;
                }
            }
            else
            {
                if(s[i] == '\n')
                {
                    lex.pp = false;
                }
                strcat_c(lex.tk, s[i]);
            }
        }

        printf("%c", s[i]);

        // Set previous character to current character
        lex.pc = s[i];
    }
}
