/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:05:24 by syonekur          #+#    #+#             */
/*   Updated: 2023/09/25 21:45:05 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int	main(void)
// {
// 	for (int i = 0; i < UCHAR_MAX; ++i)
// 	{
// 		if (ft_isdigit(i))
// 		{
// 			printf("%c(%d)\n", i, i);
// 		}
// 	}
// }