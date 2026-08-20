/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 00:27:49 by yejung            #+#    #+#             */
/*   Updated: 2026/08/01 23:58:26 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (temp);
}

/*
int main(void)
{
	char a[] = {"I AM A GOD"};
	char* k;
	k = ft_strlowcase(a);
	char* s = a;
	write(1,k,1);
	write(1,"\n",1);
	while(*s != '\0')
	{
		write(1,s,1);
		s++;
	}

	return 0;
}
*/