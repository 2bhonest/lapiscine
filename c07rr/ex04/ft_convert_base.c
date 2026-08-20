/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 15:28:48 by yejung            #+#    #+#             */
/*   Updated: 2026/08/19 04:00:22 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_test_base(char *base);
int	ft_num_maker(char *nbr, char *base_from, int len);
int	ft_atoi(char *nbr, char *base_from, int len);

int	ft_aftnbr(char *base_to, char *aftnbr, long num, int lent)
{
	int	j;
	int	i;

	i = 0;
	if (num / lent)
		i = ft_aftnbr(base_to, aftnbr, num / lent, lent);
	j = num % lent;
	aftnbr[i] = base_to[j];
	return (i + 1);
}

int	ft_malloc(int count, int size, char **aftnbr)
{
	if (count > 0)
	{
		*aftnbr = malloc((size + 2) * sizeof(char));
		if (*aftnbr == NULL)
			return (-1);
		**aftnbr = '-';
		(*aftnbr)[size + 1] = '\0';
	}
	else
	{
		*aftnbr = malloc((size + 1) * sizeof(char));
		if (*aftnbr == NULL)
			return (-1);
		(*aftnbr)[size] = '\0';
	}
	return (count);
}

char	*ft_itoa(char *base_to, long num, int lent, int count)
{
	char	*aftnbr;
	int		size;
	long	temp;

	temp = num;
	size = 1;
	while ((num) / lent)
	{
		num /= lent;
		size++;
	}
	if (ft_malloc(count, size, &aftnbr) == -1)
		return (NULL);
	if (count > 0)
		aftnbr++;
	ft_aftnbr(base_to, aftnbr, temp, lent);
	if (count > 0)
		return (--aftnbr);
	return (aftnbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		lenf;
	int		lent;
	int		num;
	long	temp;
	int		count;

	count = 0;
	lenf = ft_test_base(base_from);
	lent = ft_test_base(base_to);
	if (!(lenf) || !(lent))
		return (NULL);
	num = ft_atoi(nbr, base_from, lenf);
	temp = num;
	if (num < 0)
	{
		temp = -temp;
		count++;
	}
	return (ft_itoa(base_to, temp, lent, count));
}
/*
int	main(void)
{
	char	nbr[] = "-2A";
	char	base_from[] = "0123456789ABCDEF";
	char	base_to[] = "0123456789";
	printf("%s", ft_convert_base(nbr, base_from, base_to));
}
*/