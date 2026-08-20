/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 21:48:37 by yejung            #+#    #+#             */
/*   Updated: 2026/07/31 22:36:58 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*temp;

	temp = dest;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (temp);
}

/*
int main(void)
{
	char a[] = {"i am a god"};
	char b[100];
	char *s=b;
	char* k;
	int n = 13;
	k = ft_strncpy(b,a,n);
	write(1,k,1);
	write(1,"\n",1);
	while(n>0)
	{
		write(1,s,1);
		s++;
		n--;
	}

	return 0;
}
*/
