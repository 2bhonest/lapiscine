/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 21:27:43 by yejung            #+#    #+#             */
/*   Updated: 2026/08/06 21:55:59 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (2);
	i = 2;
	while (i <= nb / 2)
	{
		if (!(nb % i))
		{
			nb++;
			i = 1;
		}
		i++;
	}
	return (nb);
}

/*
int main(void)
{
	printf("%d", ft_find_next_prime(3));
}
*/