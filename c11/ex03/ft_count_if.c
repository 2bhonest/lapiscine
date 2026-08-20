/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 16:04:53 by yejung            #+#    #+#             */
/*   Updated: 2026/08/20 17:32:54 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	count;

	if (!tab || !f || length <= 0)
		return (0);
	count = 0;
	i = -1;
	while (++i < length)
	{
		if (f(tab[i]))
			count++;
	}
	return (count);
}
