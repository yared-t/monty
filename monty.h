fndef MONTY_H
#define MONTY_H
#define  _POSIX_C_SOURCE 200809L
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * struct instruction_s - used to store the opcode
 * @opcode: used to store the opcode
 * @f: used to store the function
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct stack_s - program used to struct the stuck
 * @n: used to store the integer
 * @prev: used to store the previous
 * @next: used to store the next
*/
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct vars_s - program used to vars the strcuct
 * @fname: used to store the first name
 * @fp: used to store the fp
 * @tokened: used to store the tokened
 * @buf: used to store buf 
 * @ln: used to store the ln
 * @head:used to store the head
 */
typedef struct vars_s
{
	char *fname;
	FILE *fp;
	char **tokened;
	char *buf;
	unsigned int ln;
	stack_t *head;
} vars_t;

extern vars_t *element;

void nop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void print_error(int e_n);

void tokenize(char *buf);
void free_buffer(void);
void pop(stack_t **stack, unsigned int line_number);
void free_token(void);
void add(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
#endif
