/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 23:55:05 by yejung            #+#    #+#             */
/*   Updated: 2026/08/21 01:44:49 by yejung           ###   ########.fr       */
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

void	temp_string(char **tab1, char **tab2)
{
	char	*temp;
	int		j;

	j = 0;
	while (((*tab1)[j] && (*tab2)[j]))
	{
		if ((*tab1)[j] > (*tab2)[j])
		{
			temp = *tab1;
			*tab1 = *tab2;
			*tab2 = temp;
			return ;
		}
		else if ((*tab1)[j] < (*tab2)[j])
			return ;
		j++;
	}
	if ((*tab1)[j] > (*tab2)[j])
	{
		temp = *tab1;
		*tab1 = *tab2;
		*tab2 = temp;
	}
}

void	ft_sort_string_tab(char **tab)
{
	int		row;
	int		i;
	int		k;

	if (!tab)
		return ;
	row = row_return(tab);
	k = -1;
	while (++k < (row - 1))
	{
		i = -1;
		while (++i < (row - 1) - k)
			temp_string(&tab[i], &tab[i + 1]);
	}
}
/*
int	main(void)
{
	int 	i;
	int 	j;
	char	*arr[] = {"abc", "zef", "bcd", "tdwd", "cdc", NULL};
	ft_sort_string_tab(arr);

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