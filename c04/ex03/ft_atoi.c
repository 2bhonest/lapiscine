/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 21:02:57 by yejung            #+#    #+#             */
/*   Updated: 2026/08/05 15:33:17 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	count;
	int	num;

	num = 0;
	count = 0;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			count++;
		str++;
	}
	while (*str && ('0' <= *str && *str <= '9'))
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	if (count % 2)
		return (-num);
	else
		return (num);
}
/*
int main(void)
{
	char str[] = " ---+--001334";
	int i = 0;
	write(1, "\"", 1);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\"\n", 2);
	printf("%d", ft_atoi(str));
	return (0);
}
*/