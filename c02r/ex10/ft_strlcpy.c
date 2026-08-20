/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 16:04:45 by yejung            #+#    #+#             */
/*   Updated: 2026/08/02 13:00:49 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (size > 0 && src[i])
	{
		if (size == 1)
		{
			dest[i] = '\0';
			break ;
		}
		dest[i] = src[i];
		i++;
		size--;
	}
	if (size > 0)
		dest[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}

/*
void	ft_putnbr(unsigned int n)
{
	char c;
	if(n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int main(void)
{
	char a[13];
	char b[] = "and we are now";
	unsigned int num;
	num = ft_strlcpy(a, b, 14);

	char *ptrb = a;
	ft_putnbr(num);
	write(1, "\n", 1);
	while(*ptrb)
	{
		write(1, ptrb, 1);
		ptrb++;
	}
	return 0;
}
*/