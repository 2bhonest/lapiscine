/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_print_memory.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 23:58:24 by yejung            #+#    #+#             */
/*   Updated: 2026/08/17 16:17:25 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_num_to_hex(unsigned long n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_num_to_hex(n / 16);
	write(1, &base[n % 16], 1);
}

void	ft_print_zero(unsigned long n)
{
	int	count;

	count = 0;
	while (n >= 16)
	{
		n /= 16;
		count++;
	}
	while (count++ < 15)
		write(1, "0", 1);
}

int	ft_print_hex(unsigned int i, unsigned int size, char *addr)
{
	int	count;

	count = -1;
	while (++count < 16)
	{
		if (size > i)
		{
			if (!((unsigned char)addr[i] / 16))
				write(1, "0", 1);
			ft_num_to_hex((unsigned char)(addr)[i]);
		}
		else
			write(1, "  ", 2);
		if (count % 2)
			write(1, " ", 1);
		i++;
	}
	return (i);
}

void	ft_print_string(unsigned int i, unsigned int size, void *addr)
{
	int	count;

	count = -1;
	while (size > i && (++count < 16))
	{
		if (!(32 <= ((unsigned char *)addr)[i]
			&& ((unsigned char *)addr)[i] <= 126))
			write(1, ".", 1);
		else
			write(1, &((char *)addr)[i], 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	void			*temp;
	int				num;

	i = 0;
	temp = addr;
	if (size == 0)
		return (addr);
	while (size > i)
	{
		num = i;
		ft_print_zero((unsigned long)&((char *)addr)[i]);
		ft_num_to_hex((unsigned long)&((char *)addr)[i]);
		write(1, ": ", 2);
		i = ft_print_hex(i, size, addr);
		ft_print_string(num, size, addr);
		write(1, "\n", 1);
	}
	return (temp);
}

/*
int	main(void)
{
	char	a[] = "Bonjour les aminches\t\n\tc\a est fou\ttout
			\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	ft_print_memory(a, sizeof(a));
}
*/