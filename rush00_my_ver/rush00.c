#include <unistd.h>

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int	rx;
	int	ry;

	ry = 1;
	while (ry <= y)
	{
		rx = 1;
		while (rx <= x)
		{
			if ((1 < rx && rx < x) && (ry == 1 || ry == y))
				ft_putchar('-');
			else if (rx == 1 || rx == x)
			{
				if (ry == 1 || ry == y)
					ft_putchar('o');
				else
					ft_putchar('|');
			}
			else
				ft_putchar(' ');
			rx++;
		}
		ry++;
		ft_putchar('\n');
	}
}
