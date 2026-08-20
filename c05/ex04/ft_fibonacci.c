/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:19:36 by yejung            #+#    #+#             */
/*   Updated: 2026/08/06 18:19:17 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	num;

	num = 0;
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index >= 2)
		num = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (num);
}
/*
int main(void)
{
	printf("%d", ft_fibonacci(2));
}
*/