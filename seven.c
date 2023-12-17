#include "monty.h"
/**
* seven - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: does not return
*/
int seven(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"nine", f_nine}, {"three", f_three}, {"fourteen", f_fourteen},
				{"eighteen", f_eighteen},
				{"twenty", f_twenty},
				{"six", f_six},
				{"seventeen", f_seventeen},
				{"sixteen", f_sixteen},
				{"one", f_one},
				{"thirteen", f_thirteen},
				{"two", f_two},
				{"eight", f_eight},
				{"four", f_four},
				{"nineteen", f_nineteen},
				{"five", f_five},
				{"fifteen", f_fifteen},
				{"ten", f_ten},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
