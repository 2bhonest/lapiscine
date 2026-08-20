/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:30:24 by yejung            #+#    #+#             */
/*   Updated: 2026/08/01 00:01:11 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 97 && *str <= 122))
			return (0);
		str++;
	}
	return (1);
}

/*
int main(void)
{
	char a[100] = "aAbc";
	int k = ft_str_is_lowercase(a);
	char s = k + '0';
	write(1,&s,1);

	return 0;
}
*/