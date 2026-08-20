/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 16:07:52 by yejung            #+#    #+#             */
/*   Updated: 2026/08/20 17:04:39 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	if (!tab || !f)
		return (0);
	i = -1;
	while (tab[++i])
	{
		if (f(tab[i]) != 0)
			return (1);
	}
	return (0);
}

/*
int contains_uppercase(char *str)
{
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
            return (1);
        str++;
    }
    return (0); //
}

int	main(void)
{
	char *arr[] = {"avv", "wana", "sdde", NULL};
	printf("%d", ft_any(arr, &contains_uppercase));
}
*/