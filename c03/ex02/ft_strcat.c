/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 14:53:26 by yejung            #+#    #+#             */
/*   Updated: 2026/08/03 15:08:26 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}

/*
int	main(void)
{
	char a[100] = "bad luck to talk ";
	char b[] = "on this ride";
	char *ptr = ft_strcat(a, b);
	printf("%c\n", *ptr);
	printf("%s", a);
	return (0);
}
*/