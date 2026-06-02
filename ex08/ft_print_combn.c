#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_array(int *range, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(range[i] + '0');
		i++;
	}
	if (range[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_init_and_increment(int *range, int n)
{
	int	i;

	range[n - 1]++;
	i = n - 1;
	while (i > 0)
	{
		if (range[i] > 9)
		{
			range[i - 1]++;
			range[i] = 0;
		}
		i--;
	}
}

int	ft_check_order(int *range, int n)
{
	int	i;

	i = 0;
	while (i < n - 1)
	{
		if (range[i] >= range[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_combn(int n)
{
	int	i;
	int	range[10];

	if (n > 9 || n < 0)
		return ;
	i = 0;
	while (i < n)
	{
		range[i] = i;
		i++;
	}
	while (range[0] <= (10 - n))
	{
		if (ft_check_order(range, n))
			ft_print_array(range, n);
		ft_init_and_increment(range, n);
	}
}

/*
int main(void)
{
	ft_print_combn(42);
	return (0);
}
*/