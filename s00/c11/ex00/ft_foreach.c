/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 02:18:08 by yejung            #+#    #+#             */
/*   Updated: 2026/08/20 17:04:44 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	if (!tab || !f || length <= 0)
		return ;
	i = -1;
	while (++i < length)
		f(tab[i]);
}
/*
void	ft_printnum(int nb)
{
	int		n[10];
	int		i;
	char	num;

	i = 10;
	while (nb > 0)
	{
		i--;
		n[i] = nb % 10;
		nb /= 10;
	}
	while (i <= 9)
	{
		num = n[i] + '0';
		write(1, &num, 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int	n;

	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
		}
		else
		{
			n = -nb;
			write(1, "-", 1);
			ft_printnum(n);
		}
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		ft_printnum(nb);
	}
}

int	main(void)
{
	int	tab[] = {123, 456, 789};
	ft_foreach(tab, 3, &ft_putnbr);
}
*/