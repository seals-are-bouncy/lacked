#include <stdio.h>
#include <string.h>
#include "argss.h"
#include "lexer.h"

int main(int argc, char **argv)
{
	arguments a;
	a.silent = 0;
	a.amount = 0;
	a.help = 0;
	a.output = "";
	parse_arguments(argc, argv, &a);

	if (a.amount == 0 && a.help == 0 && a.silent == 0)
	{
		printf("ERROR: No source files added.\n");
	}
	else
	{
		for (int i = 0; i < a.amount; i++)
		{
			//printf("%s\n", a.files[i]);

			char buffer[100] = "";
			char full_script[4096] = "";

			FILE *fp = fopen(a.files[i], "r"); // do not use "rb"
			while (fgets(buffer, sizeof(buffer), fp))
			{
				// printf("-- %s", buffer);
				strcat(full_script, buffer);
			}
			fclose(fp);
			//printf("-- file %s \n%s\n", a.files[i],full_script);

			/*char *code;
			strcat(code, "-- file ");
			strcat(code, a.files[i]);
			strcat(code, "\n");
			strcat(code, full_script);*/

			lex_anal(full_script);

			printf("\n");
		}
	}
}