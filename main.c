#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
bus_t bus = {NULL, NULL, NULL, 0};
#define MAX_LINE_SIZE 1024

/**
 * main - The monty code interpreter.
 * @argc: The number of arguments.
 * @argv: The monty file location.
 * Return: 0 when successful.
 */
int main(int argc, char *argv[])
{
	char content[MAX_LINE_SIZE];
	FILE *file;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	bus.file = file;

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(content, sizeof(content), file) != NULL)
	{
		bus.content = content;
		counter++;

		/* Process the line in 'content' */
		execute(content, &stack, counter, file);
	}

	free_stack(stack);
	fclose(file);
	return (0);
}
