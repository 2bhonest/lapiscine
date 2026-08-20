/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:02:38 by yejung            #+#    #+#             */
/*   Updated: 2026/08/08 16:17:44 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	temp(char **v, int i)
{
	char	*temp;

	temp = v[i];
	v[i] = v[i + 1];
	v[i + 1] = temp;
}

void	ft_sort_lines(int count, char **v)
{
	int		j;
	int		i;
	int		k;

	k = 1;
	while (k < count - 1)
	{
		i = 1;
		while (i < count - k)
		{
			j = 0;
			while (v[i][j] || v[i + 1][j])
			{
				if (v[i][j] > v[i + 1][j])
					temp(v, i);
				if (v[i][j] != v[i + 1][j])
					break ;
				j++;
			}
			i++;
		}
		k++;
	}
}

int	main(int count, char **v)
{
	int	i;
	int	j;

	i = 1;
	ft_sort_lines(count, v);
	while (i < count)
	{
		j = 0;
		while (v[i][j])
		{
			write(1, &v[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
