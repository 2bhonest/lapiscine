/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 16:24:45 by yejung            #+#    #+#             */
/*   Updated: 2026/08/08 21:14:10 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*s;

	i = 0;
	while (src[i])
		i++;
	s = malloc((i + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
/*
int main(void)
{
	char a[] = "hello world!";
	printf("%s", ft_strdup(a));
}
24번 줄: 공간 생성 완료
26번 줄: 컴퓨터의 메모리가 부족하면 malloc 함수는 약속대로 s에 null을 반환하여 넣음
*/