/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 00:15:42 by yejung            #+#    #+#             */
/*   Updated: 2026/08/01 00:26:55 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (temp);
}

/*
int main(void)
{
	char a[] = {"i am a god"};
	char* k;
	k = ft_strupcase(a);
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