#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int i = 0;
    int len = abs(end - start) + 1;
    int *res = (int *)malloc(sizeof(int) * len);

    while(i < len)
    {
        if(end < start)
            res[i] = end++;
        else
            res[i]= end--;
        i++;
    }
    return (res);
}