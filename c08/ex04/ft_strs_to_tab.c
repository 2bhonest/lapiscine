/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 18:48:47 by yejung            #+#    #+#             */
/*   Updated: 2026/08/12 02:05:35 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_set_zero(int ac, t_stock_str	*arr)
{
	arr[ac].str = 0;
	arr[ac].copy = 0;
	arr[ac].size = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;
	int			j;

	arr = malloc((ac + 1) * sizeof(t_stock_str));
	if (arr == NULL)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		arr[i].str = av[i];
		j = 0;
		while (av[i][j])
			j++;
		arr[i].size = j;
		arr[i].copy = malloc((j + 1) * sizeof(char));
		if (arr[i].copy == NULL)
			return (NULL);
		j = -1;
		while (arr[i].str[++j])
			arr[i].copy[j] = arr[i].str[j];
		arr[i].copy[j] = '\0';
	}
	ft_set_zero(ac, arr);
	return (arr);
}
