#include "monty.h"
/**
 * f_pall - Prints all the elements of a stack.
 * @head: A pointer to the head of the stack.
 * @counter: No used.
 * Return: No return.
*/
void f_pall(stack_t **head, unsigned int counter)
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
