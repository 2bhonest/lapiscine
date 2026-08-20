/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 02:54:44 by yejung            #+#    #+#             */
/*   Updated: 2026/08/19 03:02:41 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	charset_checker(char *str, char *charset)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (*str == charset[j++])
			return (1);
	}
	return (0);
}

int	row_return(char *str, char *charset)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	if (!*str)
		return (0);
	while (str[i])
	{
		if (i > 0 && charset_checker(&str[i], charset))
		{
			if (!charset_checker(&str[i - 1], charset))
				count++;
		}
		i++;
	}
	j = -1;
	while (charset[++j])
	{
		if (str[i - 1] == charset[j])
			return (count);
	}
	return (count + 1);
}

int	*index_return(char *str, char *charset, int row)
{
	int	i;
	int	j;
	int	*index;

	index = malloc(row * sizeof(int));
	if (index == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (str[i])
	{
		if (!charset_checker(&str[i], charset))
		{
			index[j++] = i;
			while (str[i + 1] && !charset_checker(&str[++i], charset))
				;
		}
		i++;
	}
	return (index);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = -1;
	while (str[++i])
	{
		j = -1;
		while (charset[++j])
		{
			if (str[i] == charset[j])
				return (len);
		}
		len++;
	}
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	int		*index;
	int		i[2];
	int		len;
	char	**arr;

	arr = malloc((row_return(str, charset) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	index = index_return(str, charset, row_return(str, charset));
	arr[row_return(str, charset)] = NULL;
	if (index == NULL && row_return(str, charset))
		return (NULL);
	i[0] = -1;
	while (++i[0] < row_return(str, charset))
	{
		len = ft_strlen(&str[index[i[0]]], charset);
		arr[i[0]] = malloc((len + 1) * sizeof(char));
		if (arr[i[0]] == NULL)
			return (NULL);
		i[1] = -1;
		while (++i[1] < len)
			arr[i[0]][i[1]] = str[index[i[0]]++];
		arr[i[0]][i[1]] = '\0';
	}
	return (arr);
}
/*
int	main(void)
{
	char	str[] = ",a, ,   ,, d , ded , d, a,";
	char	charset[] = " ,";
	char	**arr;
	int		row;
	int		i;
	int		j;

	row = row_return(str, charset);
	arr = ft_split(str, charset);
	i = -1;
	while (++i < row)
	{
		j = -1;
		while (arr[i][++j])
			write(1, &arr[i][j], 1);
		write(1, "\n", 1);
	}
}
*/