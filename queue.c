#include "monty.h"
/**
 * f_queue - Sets the lifo/fifo flag to 1.
 * @head: A double pointer to the head of the stack.
 * @counter: The line number.
 * Return: No return.
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - Adds a new node to the end of the stack.
 * @n: The value for the new node.
 * @head: A pointer to the head of stack.
 * Return: No return.
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
