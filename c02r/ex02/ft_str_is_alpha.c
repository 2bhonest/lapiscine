/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 22:37:54 by yejung            #+#    #+#             */
/*   Updated: 2026/07/31 23:09:16 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
		{
		}
		else if (*str >= 97 && *str <= 122)
		{
		}
		else
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
int main(void)
{
	char a[100] = "";
	int k = ft_str_is_alpha(a);
	char s = k + '0';
	write(1,&s,1);

	return 0;
}
*/