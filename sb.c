#include "push_swap.h"

void sb(t_stack **stack_b)
{
    t_stack *first;
    t_stack *second;

    if (*stack_b == NULL || (*stack_b)->next == NULL)
        return;

    first = *stack_b;
    second = first->next;

    first->next = second->next;
    second->next = first;
    *stack_b = second;
}