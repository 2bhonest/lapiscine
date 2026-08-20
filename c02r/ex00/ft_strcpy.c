/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 20:59:05 by yejung            #+#    #+#             */
/*   Updated: 2026/07/31 23:27:46 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (temp);
}

/*
int main(void)
{
	char a[] = {"i am a god"};
	char b[100];
	char *s=b;
	char* k;
	k = ft_strcpy(b,a);
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