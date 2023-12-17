#include "monty.h"
/**
* twelve - frees a doubly linked list
* @head: head of the stack
*/
void twelve(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
