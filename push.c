#include "monty.h"
/**
 * push - pushes an element to thw top of a stack
 * @stack: double poimter to stack
 * @line_number: keeps track of line from command line
 *
 * Return: void
 */
void push(stack_t **stack, int num)
{
	char *arg;

	arg = strtok(NULL, " \n");
        if (!arg || !isdigit(*arg))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	num = atoi(arg);
	add_node(stack, num);
}
