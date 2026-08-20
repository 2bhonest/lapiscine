/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 00:19:47 by yejung            #+#    #+#             */
/*   Updated: 2026/08/11 22:36:24 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_num_maker(char *str, char *base, int i)
{
	int	check;
	int	j;
	int	num;

	num = 0;
	while (*str)
	{
		check = 0;
		j = 0;
		while (j < i)
		{
			if (base[j] == *str)
			{
				num *= i;
				num += j;
				check++;
			}
			j++;
		}
		if (check == 0)
			break ;
		str++;
	}
	return (num);
}

int	ft_atoi_check(char *str, char *base, int i)
{
	int	sign;
	int	num;

	sign = 0;
	num = 0;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign++;
		str++;
	}
	num = ft_num_maker(str, base, i);
	if (sign % 2)
		return (-num);
	else
		return (num);
}

int	ft_test_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
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
	if (i <= 1)
		return (0);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;

	if (!str || !base)
		return (0);
	i = ft_test_base(base);
	if (i == 0)
		return (0);
	return (ft_atoi_check(str, base, i));
}

int main(void)
{
	char str[] = "---+1234!!23";
	char base[] = "0123456789ABCDEF";
	printf("%d",ft_atoi_base(str, base));
	return (0);
}
