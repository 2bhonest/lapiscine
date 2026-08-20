/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 22:55:21 by yejung            #+#    #+#             */
/*   Updated: 2026/08/08 23:48:26 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	temp;

	temp = min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
		*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (min < max)
		(*range)[i++] = min++;
	return (max - temp);
}
/*
int main(void)
{
	int i;
	int *a;
	int size;

	i = 0;
	size = ft_ultimate_range(&a, 3, 5); //넣어준건 a의 주소.
	printf("%d\n", size);
	while (i < 5 - 3)
		printf("%d", a[i++]);
}
*/