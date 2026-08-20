/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 00:32:09 by yejung            #+#    #+#             */
/*   Updated: 2026/08/02 12:57:20 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	str = temp;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (str == temp || !((*(str - 1) >= 'a' && *(str - 1) <= 'z')
					|| (*(str - 1) >= 'A' && *(str - 1) <= 'Z')
					|| (*(str - 1) >= '0' && *(str - 1) <= '9')))
				*str -= 32;
		}
		str++;
	}
	return (temp);
}

/*
int main(void)	
{
	char a[] = {"hi, hOw aRe you? 42words forty-two; fifty+and+one"};
	char* k;
	k = ft_strcapitalize(a);
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