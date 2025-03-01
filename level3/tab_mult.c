#include <unistd.h>

int ft_atoi(char *str)
{
	int res = 0;
	int sign = 1;

	if(*str == '-')
		sign = -1;
	if(*str == '+' || *str == '-')
		str++;
	while(*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while(*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

void ft_putchr(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	char digit[10] = "0123456789";
	if(n > 9)
		ft_putnbr(n / 10);
	write(1, &digit[n % 10], 1);
}

int main(int argc, char** argv)
{
	int i = 1;
	int nbr = ft_atoi(argv[1]);
	if(argc == 2)
	{
		
		while(i <= 9 && nbr <= 238609183)
		{
			ft_putnbr(i);
			write(1, "*", 1);
			ft_putnbr(nbr);
			write(1, "=", 1);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}