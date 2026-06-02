#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	n;
	char			c;

	if (nb < 0)
	{
		write(1, "-", 1);
		n = (unsigned int)(-nb);
	}
	else
	{
		n = (unsigned int)nb;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

/*
int main(void)
{
	ft_putnbr(42);
	return(0);
}
*/