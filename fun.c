#include "monty.h"
#include <string.h>
#include <stdlib.h>

/**
 * tokenize - a program used to tokenize an input
 * @buf: used to store the buffer line
 * Return: success
 */
void tokenize(char *buf)
{
	char *token;
	char *delim;
	int i;

	element->tokened[0] = NULL;
	element->tokened[1] = NULL;
	delim = " \n";
	token = strtok(buf, delim);
	for (i = 0; token != NULL && i < 2; i++)
	{
		element->tokened[i] = _strdup(token);
		if (!element->tokened[i])
		{
			print_error(3);
		}
		token = strtok(NULL, delim);
	}
}


/**
  * free_token - program used to free the token
  * Return: success
  */
void free_token(void)
{
	if (element->tokened != NULL)
	{
		if (element->tokened[0] != NULL)
			free(element->tokened[0]);
		if (element->tokened[1] != NULL)
			free(element->tokened[1]);
		free(element->tokened);
	}
	element->tokened = NULL;
}
/**
 * _strdup - progrma used to duplicate
 * @s: used to store a String input
 * Return: success
 */
char *_strdup(char *s)
{
        size_t l, n;
        char *s2;

        l = strlen(s);
        s2 = malloc(sizeof(char) * (l + 1));
        if (!s2)
        {
        return (NULL);
        }

        for (n = 0; n <= l; n++)
        {
        s2[n] = s[n];
        }

        return (s2);

}
/**
 * free_buffer - program used to free the buffer
 * Return: success
 */
void free_buffer(void)
{
        if (element->buf != NULL)
        {
                free(element->buf);
                element->buf = NULL;
        }
}
