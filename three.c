#include "monty.h"
/**
 * f_three - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: does not return
*/
void f_three(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
