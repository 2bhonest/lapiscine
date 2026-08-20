/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bao.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 21:01:01 by yejung            #+#    #+#             */
/*   Updated: 2026/08/20 23:47:17 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	plus(int a, int b)
{
	return (a + b);
}

int	minus(int a, int b)
{
	return (a - b);
}

int	multiple(int a, int b)
{
	return (a * b);
}

int	division(int a, int b)
{
	return (a / b);
}

int	remain(int a, int b)
{
	return (a % b);
}
