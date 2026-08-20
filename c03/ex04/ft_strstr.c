/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 15:21:12 by yejung            #+#    #+#             */
/*   Updated: 2026/08/03 16:37:52 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*strptr;
	int		i;
	int		j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			strptr = &str[i];
			while (strptr[j] && to_find[j])
			{
				if (strptr[j] != to_find[j])
					break ;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char a[] = "bad lu luc luck to talk ";
	char b[] = "l";
	char *ptr = ft_strstr(a, b);
	printf("%s\n", ptr);
	return (0);
}
*/