/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 15:28:48 by yejung            #+#    #+#             */
/*   Updated: 2026/08/19 03:25:49 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_test_base(char *base)
{
	int	len;
	int	j;

	len = 0;
	while (base[len])
	{
		if (base[len] == '+' || base[len] == '-'
			|| base[len] == ' ' || (base[len] >= 9 && base[len] <= 13))
			return (0);
		j = 0;
		while (j < len)
		{
			if (base[len] == base[j])
				return (0);
			j++;
		}
		len++;
	}
	if (len <= 1)
		return (0);
	return (len);
}

int	ft_num_maker(char *nbr, char *base_from, int len)
{
	int	check;
	int	j;
	int	num;

	num = 0;
	while (*nbr)
	{
		check = 0;
		j = 0;
		while (j < len)
		{
			if (base_from[j] == *nbr)
			{
				num *= len;
				num += j;
				check++;
			}
			j++;
		}
		if (check == 0)
			break ;
		nbr++;
	}
	return (num);
}

int	ft_atoi(char *nbr, char *base_from, int len)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (*nbr == ' ' || (9 <= *nbr && *nbr <= 13))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	num = ft_num_maker(nbr, base_from, len);
	return (sign * num);
}
