/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 18:21:13 by yejung            #+#    #+#             */
/*   Updated: 2026/08/12 02:05:43 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct xy{
	int	x;
	int	y;
}	t_point;

#endif

/*
point->x == (*point).x
*point는 pointer가 가리키는 실제 구조체
struct xy point; <- 정식 표기법!
*/