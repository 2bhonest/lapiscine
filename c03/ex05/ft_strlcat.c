/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 16:38:36 by yejung            #+#    #+#             */
/*   Updated: 2026/08/03 20:18:15 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	temp;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && (i < size))
		i++;
	temp = i;
	if (i == size)
	{
		while (src[j])
			j++;
		return (size + j);
	}
	while (src[j] != '\0' && (i < size -1))
		dest[i++] = src[j++];
	while (src[j])
		j++;
	dest[i] = '\0';
	return (temp + j);
}

/*
int	main(void)
{
	char a[6] = "bad";
	char b[] = "abcdef";
	int s = ft_strlcat(a, b, 6);
	printf("%s\n", a);
	printf("%d", s);
	return (0);
}
*/