#include "monty.h"
/*
 * auther: Kaimoi
 * m_pall- prints all the values on the 'stack' starting from the top of the stack
 * @stack: double pointer to head of stack
 * @ine_number: line number being executed from script file
 *
 * Return: void
 */
void m_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	(void)(line_number);

	head = *stack;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		if (head == *stack)
		{
			return;
		}
	}
}
