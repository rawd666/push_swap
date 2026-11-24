#include "push_swap.h"

void pb(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *temp;

    if (*stack_a == NULL)
        return;

    temp = *stack_a;
    *stack_a = (*stack_a)->next;
    temp->next = *stack_b;
    *stack_b = temp;
}