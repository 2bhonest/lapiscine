/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 20:45:58 by yejung            #+#    #+#             */
/*   Updated: 2026/08/20 23:54:39 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	plus(int a, int b);
int	minus(int a, int b);
int	multiple(int a, int b);
int	division(int a, int b);
int	remain(int a, int b);

int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	num = 0;
	sign = 1;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && ('0' <= *str && *str <= '9'))
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	return (sign * num);
}

void	ft_putnbr(long nb)
{
	char	num;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	num = nb % 10 + '0';
	write(1, &num, 1);
}

int	get_index(char *c)
{
	if (c[1] != '\0')
		return (-1);
	if (c[0] == '+')
		return (0);
	else if (c[0] == '-')
		return (1);
	else if (c[0] == '*')
		return (2);
	else if (c[0] == '/')
		return (3);
	else if (c[0] == '%')
		return (4);
	return (-1);
}

int	main(int count, char **v)
{
	int		i;
	long	num;
	int		(*operation[5])(int, int);

	operation[0] = plus;
	operation[1] = minus;
	operation[2] = multiple;
	operation[3] = division;
	operation[4] = remain;
	if (count != 4)
		return (0);
	i = get_index(v[2]);
	if (i == -1)
		return (0);
	if ((i == 3 || i == 4) && !ft_atoi(v[3]))
	{
		if (i == 3)
			write(1, "Stop : division by zero\n", 24);
		if (i == 4)
			write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	num = operation[i](ft_atoi(v[1]), ft_atoi(v[3]));
	ft_putnbr(num);
	write(1, "\n", 1);
}
