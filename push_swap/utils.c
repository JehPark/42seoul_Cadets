#include "push_swap.h"

t_node *last(t_node **root)
{
    t_node *tmp;

    if (!*root)
        return (0);
    tmp = *root;
    while (tmp->next)
        tmp = tmp->next;
    return (tmp);
}

t_node *last_prev(t_node **root)
{
    t_node *tmp;

    if (!*root || !(*root->next))
        return (0);
    tmp = *root;
    while (tmp->next->next)
        tmp = tmp->next;
    return (tmp);
}

int ft_isspace(char ch)
{
    if (ch == '\f' || ch == '\v' || ch == '\n' || ch == '\r' || ch == '\t' || ch == ' ')
        return (1);
    return (0);
}

int ft_atoi(char *nbr)
{
    int ret;
    int sign;

    while (ft_isspace(*nbr))
        nbr++;
    sign = 1;
    if (*nbr == '+' || *nbr == '-')
    {
        if (*nbr == '-')
            sign *= -1;
        nbr++;
    }
    ret = 0;
    while (*nbr && '0' <= *nbr && *nbr <= '9')
    {
        ret *= 10;
        ret += *nbr - '0'
    }
    return (ret * sign);
}
