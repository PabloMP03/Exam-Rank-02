#include <unistd.h>

void ft_putnbr(int n)
{
    char digit[10] = "0123456789";

    if(n > 9)
        ft_putnbr(n / 10);
    write(1, &digit[n % 10], 1); 
}

int main(int argc, char** argv)
{
    ft_putnbr(argc - 1);
    write(1, "\n", 1);
    return (0);
}