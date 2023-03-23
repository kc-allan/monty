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
<<<<<<< HEAD
	num = atoi(arg);
	add_node(stack, num);
=======

	if (global.data_struct == 1)
	{
		if (!add_node(stack, atoi(global.argument)))
		{
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (!queue_node(stack, atoi(global.argument)))
		{
			exit(EXIT_FAILURE);
		}
	}
>>>>>>> d300fd7e7859c813166ad5f999516f3d5b12f89a
}
