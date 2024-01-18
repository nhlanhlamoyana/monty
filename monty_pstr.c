#include "monty"

/**
 * f_pstr - Prints the string starting from the top
 * of the stack followed by new line.
 * @head: Double pointer to the head of the stack.
 * @counter: The line number.
 * Return: No return.
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)coounter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	pritnf("\n");
}
