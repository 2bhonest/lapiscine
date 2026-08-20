/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejung <yejung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 15:31:34 by yejung            #+#    #+#             */
/*   Updated: 2026/08/11 17:46:55 by yejung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;

# define TRUE 1
# define FALSE 0
# define EVEN(nbr) ((nbr) % 2 == 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0

#endif
/*
typedef는 int라는 이미 존재하는 데이터타입의 별명을 하나 만들어 준것!!
define은 일종의 치환이라고 보면됨.
반드시 22번 줄에서 (nbr)을 해줘야 함. a + 1같은 상황!!
*/