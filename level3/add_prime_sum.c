#include <unistd.h>

int ft_atoi (char *str)
{
    int res = 0;

    while (*str)
    {
        res = res * 10 + *str++ - '0';
    }
    return(res);
}

int is_prime(int num)
{
    int i = 2;
    if(num <= 1)
        return (0);
    else
    {
        if (num % i == 0)
            return (0);
        i++;
    }
    return (1);
}

void ft_putnbr(int n)
{
    char digit[10] = "0123456789";
    if(n >= 10)
        ft_putnbr(n / 10);
    write(1, &digit[n % 10], 1);
}

int main(int argc, char** argv)
{
    if(argc == 2)
    {
        int nbr = ft_atoi(argv[1]);
        int sum = 0;

        while(nbr > 0)
        {
            if(is_prime(nbr))
                sum += nbr;
            nbr--;
        }
        ft_putnbr(nbr);
    }
    if(argc != 2)
        ft_putnbr(0);
    write(1, "\n", 1);
    return (0);
}