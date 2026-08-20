/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:47:31 by yejung            #+#    #+#             */
/*   Updated: 2026/08/20 16:04:09 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*rv;

	if (!tab || !f || length <= 0)
		return (NULL);
	rv = malloc(length * sizeof(int));
	if (!rv)
		return (NULL);
	i = -1;
	while (++i < length)
		rv[i] = f(tab[i]);
	return (rv);
}
