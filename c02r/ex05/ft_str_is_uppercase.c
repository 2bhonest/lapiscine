/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 00:02:11 by yejung            #+#    #+#             */
/*   Updated: 2026/08/01 00:07:21 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 65 && *str <= 90))
			return (0);
		str++;
	}
	return (1);
}

/*
int main(void)
{
	char a[100] = "";
	int k = ft_str_is_uppercase(a);
	char s = k + '0';
	write(1,&s,1);

	return 0;
}
*/