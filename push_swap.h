#ifndef LIBFT_H
# define LIBFT_H

typedef struct s_stack
{
    int content;
    int index;
    struct s_stack *next;
} t_stack;

#endif