/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangkim <sangkim@student.42gyeongsan.kr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 19:54:41 by sangkim           #+#    #+#             */
/*   Updated: 2026/08/01 20:22:37 by sangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	main(void)
{
	rush(0b10000, 0b10000);
	return (0);
}
// int	main(void)
// {
// 	write(1, "===================\n", 20);
// 	write(1, "======= start =====\n", 20);
// 	write(1, "===================\n", 20);
// 	rush(5, 5);
// 	rush(5, 1);
// 	rush(1, 1);
// 	rush(1, 5);
// 	rush(4, 4);
// 	rush(0, 0);
// 	write(1, "===================\n", 20);
// 	write(1, "=======  end  =====\n", 20);
// 	write(1, "===================\n", 20);
// 	return (0);
// }
// Instruction: 
// 	Your rush function must display a rectangle on the screen
// 	with a width of x char- acters and a height of y characters
// Maybe width/height can't be negative..?
// rush(-1, -1);
// rush(-10, -5);
// rush(3, -3);
// write(1, "====================", 20);
//
// // and this?
// rush(-5, 5);
// rush(5, -5);
