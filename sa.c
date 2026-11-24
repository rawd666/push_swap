#include "push_swap.h"

void sa(t_stack **stack_a)
{
    t_stack *first;
    t_stack *second;

    if (*stack_a == NULL || (*stack_a)->next == NULL)
        return;

    first = *stack_a;
    second = first->next;

    first->next = second->next;
    second->next = first;
    *stack_a = second;
}