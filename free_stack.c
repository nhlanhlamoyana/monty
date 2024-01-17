#include "monty.h"
/**
 * free_stack - A doubly linked list to be freed.
 * @head: The head of the stack.
 */
void free_stack(stack_t *head)
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
