#include <unistd.h>

void	ft_putchar(char c);

void	rush03(int x, int y)
{
	int	rx;
	int	ry;

	ry = 1;
	while (ry <= y)
	{
		rx = 1;
		while (rx <= x)
		{
			if (rx == 1 && ry == 1 || rx == 1 && ry == y)
				ft_putchar('A');
			else if (rx == x && ry == 1 || rx == x && ry == y)
				ft_putchar('C');
			else if (((1 < rx && rx < x) && (ry == 1 || ry == y)) || (rx == 1 || rx == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			rx++;
		}
		ry++;
		ft_putchar('\n');
	}
}
