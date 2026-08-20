/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 18:00:33 by yejung            #+#    #+#             */
/*   Updated: 2026/08/02 13:14:38 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned char	print;
	int				i;

	i = 0;
	while (str[i])
	{
		if (!(' ' <= str[i] && str[i] <= '~'))
		{
			write(1, "\\", 1);
			if (((unsigned char)str[i] / 16) <= 9)
				print = ((unsigned char)str[i] / 16) + '0';
			else
				print = (((unsigned char)str[i] / 16) - 10) + 'a';
			write(1, &print, 1);
			if (((unsigned char)str[i] % 16) <= 9)
				print = ((unsigned char)str[i] % 16) + '0';
			else
				print = (((unsigned char)str[i] % 16) - 10) + 'a';
			write(1, &print, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

/*
int main(void)
{
	char a[]="Hello\nHow are you?";
	ft_putstr_non_printable(a);
}
*/