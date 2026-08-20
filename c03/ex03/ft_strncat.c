/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 15:09:13 by yejung            #+#    #+#             */
/*   Updated: 2026/08/03 15:20:37 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp;

	temp = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && nb)
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
	return (temp);
}

/*
int	main(void)
{
	char a[100] = "bad luck to talk ";
	char b[] = "on this ride";
	char *ptr = ft_strncat(a, b, 5);
	printf("%c\n", *ptr);
	printf("%s", a);
	return (0);
}
*/