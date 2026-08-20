/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 22:13:12 by yejung            #+#    #+#             */
/*   Updated: 2026/08/08 19:33:54 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int count, char **v)
{
	int		i;

	(void)count;
	i = 0;
	while (v[0][i])
	{
		write(1, &v[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
/*
int	main(int count, char **v)
{
	int i;

	i = 0;
	while (*v[0])
	{
		write(1, v[0], 1);
		v[0]++;
	}
	return (0);
}
*/