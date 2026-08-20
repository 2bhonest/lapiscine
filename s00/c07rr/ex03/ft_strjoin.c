/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 23:49:00 by yejung            #+#    #+#             */
/*   Updated: 2026/08/10 15:28:17 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	num_of_char(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			count++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	return (count + i * (size - 1));
}

void	assign(int size, char *s, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		if (i > 0)
		{
			while (sep[j])
				s[k++] = sep[j++];
		}
		j = 0;
		while (strs[i][j])
			s[k++] = strs[i][j++];
		i++;
	}
	s[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		num;
	char	*s;

	if (size == 0)
	{
		s = malloc(1);
		s[0] = '\0';
		return (s);
	}
	num = num_of_char(size, strs, sep);
	s = malloc((num + 1) * sizeof(char));
	assign(size, s, strs, sep);
	return (s);
}
/*
int	main(void)
{
	char *strs[7] = {"bad", "luck", "to", "talk", "on", "this", "rides"};
	char sep[] = ", ";
	printf("%s", ft_strjoin(7, strs, sep));
}
//71번 줄: assgin 1byte
*/