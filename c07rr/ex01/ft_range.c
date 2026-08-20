/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 21:14:39 by yejung            #+#    #+#             */
/*   Updated: 2026/08/08 22:54:23 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	if (min >= max)
		return (NULL);
	a = malloc((max - min) * sizeof(int));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (min < max)
		a[i++] = min++;
	return (a);
}
/*
int main(void)
{
	int *arr;
	int i;

	i = 0;
	arr = ft_range(3, 8);
	if (arr == NULL)
		printf("ERROR!");
	else
	{
		while (i < 8 - 3)
		{
			printf("%d", arr[i]);
			puts("");
			i++;
		}
	}
	free (arr);
}
*/