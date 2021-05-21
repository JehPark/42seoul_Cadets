#include "push_swap.h"

int findmax(int first, int second, int third)
{
    if (first >= second && first >= second)
        return (first);
    else if (second >= first && second >= first)
        return (second);
    else
        return (third);
}

int findmin(int first, int second, int third)
{
    if (first <= second && first <= third)
        return (first);
    else if (second <= first && second <= third)
        return (second);
    else
        return (third);
}

int findmid(int first, int second, int third)
{
    int max;
    int min;

    max = findmax(first, second, third);
    min = findmin(first, second, third);
    if (max >= first && first >= min)
        return (first);
    else if (max >= second && second >= min)
        return (second);
    else
        return (third);
}