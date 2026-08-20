/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 01:08:26 by yejung            #+#    #+#             */
/*   Updated: 2026/08/21 01:45:02 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	row_return(char **tab)
{
	int	row;

	row = 0;
	while (tab[row])
		row++;
	return (row);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		row;
	int		i;
	int		k;
	char	*temp;

	if (!tab)
		return ;
	row = row_return(tab);
	k = -1;
	while (++k < (row - 1))
	{
		i = -1;
		while (++i < (row - 1) - k)
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
		}
	}
}
/*
int	cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	int 	i;
	int 	j;
	char	*arr[] = {"abc", "zef", "bcd", "tdwd", "cdc", NULL};
	ft_advanced_sort_string_tab(arr, cmp);

	i = -1;
	while (arr[++i])
	{
		j = -1;
		while (arr[i][++j])
		{
			write(1, &arr[i][j], 1);
		}
		write(1, "\n", 1);
	}
}
*/