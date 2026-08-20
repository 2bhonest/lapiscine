/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 21:17:06 by yejung            #+#    #+#             */
/*   Updated: 2026/07/30 21:59:40 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	large;
	int	small;
	int	temp;

	large = size - 1;
	small = 0;
	while (large > small)
	{
		temp = tab[large];
		tab[large] = tab[small];
		tab[small] = temp;
		large--;
		small++;
	}
}
