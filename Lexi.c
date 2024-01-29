#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

bool isDelimiter(char ch)
{
    if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' || 
        ch == '/' || ch == ',' || ch == ';' || ch == '>' || 
        ch == '<' || ch == '=' || ch == '(' || ch == ')' || 
        ch == '[' || ch == ']' || ch == '{' || ch == '}')
        return (true);
    return (false);
}

bool isKeyword(char* str)
{
    if (!strcmp(str, "if") || !strcmp(str, "else") ||
        !strcmp(str, "while") || !strcmp(str, "do") || 
        !strcmp(str, "break") || 
         !strcmp(str, "continue") || !strcmp(str, "int")
        || !strcmp(str, "double") || !strcmp(str, "float")
        || !strcmp(str, "return") || !strcmp(str, "char")
        || !strcmp(str, "case") || !strcmp(str, "char")
        || !strcmp(str, "sizeof") || !strcmp(str, "long")
        || !strcmp(str, "short") || !strcmp(str, "typedef")
        || !strcmp(str, "switch") || !strcmp(str, "unsigned")
        || !strcmp(str, "void") || !strcmp(str, "static")
        || !strcmp(str, "struct") || !strcmp(str, "goto"))
        return (true);
    return (false);
}



int main()
{
	FILE *input;
	FILE *keyword;
	input =fopen("input.txt","r");
	keyword =fopen("keyword.txt","a");
	if (input == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
	int c;
	char* w="";
	while ((c = fgetc(input)) != EOF) 
	{
		if(!isDelimiter(c) && c!='\n')
		{
			w=w+c;
		}
		if(isDelimiter(c) && isKeyword(w))
		{
			fprintf(keyword,"asedfsdfws");
			w="";
		}
	}
	fclose(keyword);
	fclose(input);
}
