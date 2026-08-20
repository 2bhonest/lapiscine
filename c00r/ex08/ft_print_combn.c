/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 15:26:02 by yejung            #+#    #+#             */
/*   Updated: 2026/08/13 23:53:10 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recursive(char *arr, int i, int start, int n)
{
	if (i == n)
	{
		write(1, arr, n);
		if (arr[0] != 10 - n + '0')
			write(1, ", ", 2);
		return ;
	}
	while (start <= 9)
	{
		arr[i] = start + '0';
		ft_recursive(arr, i + 1, start + 1, n);
		start++;
	}
}

void	ft_print_combn(int n)
{
	char	arr[10];

	if (n <= 0 || n >= 10)
		return ;
	arr[n] = '\0';
	ft_recursive(arr, 0, 0, n);
}
/*
int	main(void)
{
	ft_print_combn(5);
}
*/
/*n = 5라고 치면 계속 호출을 하다가 i가 3일때 -> 4, 4를 넣은 리컬시브가 실행이 되고, arr[4] = 4가 된다. 
그 후에 i = 5가 되어 출력이 되고, 그 다음 일어날 사건은 i=4, start=4일때의 사건이다. 
그렇기 때문에 start++이 되고, i=4, start=5가 된 상태로 리컬시브에 들어가고 바로 출력이 된다. 
i=4 start=6 ,,, start가 10이 되면 함수가 끝나고 그 다음 일어난 사건인 3,3일떄로 돌아간다. 그렇게 되면
i=3, start=4일떄가 실행이 되고, 0124가 완성된 후에 리컬시브에 i=4 start=5가 들어간다. 
01245가 출력되고 다시 돌아가서 i=4 start=6이 된다. 012346출력 ...
*/