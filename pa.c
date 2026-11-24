#include "push_swap.h"

void pa(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *temp;

    if (*stack_b == NULL)
        return;

    temp = *stack_b;
    *stack_b = (*stack_b)->next;
    temp->next = *stack_a;
    *stack_a = temp;
}