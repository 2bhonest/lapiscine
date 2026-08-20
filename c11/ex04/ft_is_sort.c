/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:33:42 by yejung            #+#    #+#             */
/*   Updated: 2026/08/20 20:40:10 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	check;

	check = 0;
	if (!tab || !f || length <= 0)
		return (0);
	i = -1;
	while (++i < length - 1)
	{
		if (check == -1 || f(tab[i], tab[i + 1]) < 0)
		{
			check = -1;
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
		}
		if (check == 1 || f(tab[i], tab[i + 1]) > 0)
		{
			check = 1;
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
		}
	}
	return (1);
}
/*
int	ft_cmp(int a, int b)
{
	return (a - b);
}

int main(void)
{
	int tab[] = {2, 2, 3};
	printf("%d", ft_is_sort(tab, 3, &ft_cmp));
}
*/