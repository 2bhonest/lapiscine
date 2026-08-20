/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 19:54:40 by sangkim           #+#    #+#             */
/*   Updated: 2026/08/04 12:08:44 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// iterate horizontal
#include <unistd.h>

// int   count: width count
// char  *shapes: start_node / edge / end_node
void	ft_putchar(int count, char *shapes)
{
	int	i;

	i = 0;
	while (++i <= count)
	{
		if (i == 1)
			write(1, &shapes[0], 1);
		else if (i == count)
			write(1, &shapes[2], 1);
		else
			write(1, &shapes[1], 1);
	}
	write(1, "\n", 1);
}
