/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 14:37:53 by yejung            #+#    #+#             */
/*   Updated: 2026/08/05 16:58:16 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_prtnbr(long num, char *base, int i)
{
	int	j;

	if (num >= i)
		ft_prtnbr(num / i, base, i);
	j = num % i;
	write(1, &base[j], 1);
}

int	check(char *base)
{
	int	i;
	int	j;

	if (!base)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	long	num;

	num = nbr;
	i = check(base);
	if (i <= 1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	ft_prtnbr(num, base, i);
}
/*
int main(void)
{
	char str[] = "abcdef";
	ft_putnbr_base(6, str);
	return (0);
}
*/