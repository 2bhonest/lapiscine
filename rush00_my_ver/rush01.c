#include <unistd.h>

void	ft_putchar(char c);

void	rush01(int x, int y)
{
	int	rx;
	int	ry;

	ry = 1;
	while (ry <= y)
	{
		rx = 1;
		while (rx <= x)
		{
			if ((rx == 1 && ry == 1 || rx == x && ry == y) && (x != 1 || ry == 1))
				ft_putchar('/');
			else if ((rx == 1 && ry == y || rx == x && ry == 1))
				ft_putchar('\\');
			else if (((1 < rx && rx < x) && (ry == 1 || ry == y)) 
					|| (rx == 1 || rx == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			rx++;
		}
		ry++;
		ft_putchar('\n');
	}
}
