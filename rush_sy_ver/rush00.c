/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangkim <sangkim@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 19:54:38 by sangkim           #+#    #+#             */
/*   Updated: 2026/08/01 20:02:22 by sangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// iterate vertical
void	ft_putchar(int count, char *shapes);

int	_is_first_line(char sort_of_line)
{
	if (sort_of_line == 'F')
		return (1);
	return (0);
}

int	_is_last_line(char sort_of_line)
{
	if (sort_of_line == 'L')
		return (1);
	return (0);
}

// buf(sort_of_line): [F]irst, [L]ast, [M]iddle
void	_set_sort_of_line(int current, int total, char *buf)
{
	if (current == 1)
		*buf = 'F';
	else if (current == total)
		*buf = 'L';
	else
		*buf = 'M';
}

void	rush(int x, int y)
{
	char	sort_of_line;
	int		i;

	i = 0;
	while (++i <= y)
	{
		_set_sort_of_line(i, y, &sort_of_line);
		if (_is_first_line(sort_of_line))
			ft_putchar(x, "o-o");
		else if (_is_last_line(sort_of_line))
			ft_putchar(x, "o-o");
		else
			ft_putchar(x, "| |");
	}
}
