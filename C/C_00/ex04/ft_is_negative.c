/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:04:06 by hle               #+#    #+#             */
/*   Updated: 2022/10/26 12:16:06 by hle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	r;

	if (n < 0)
		r = 'N';
	else
		r = 'P';
	write(1, &r, 1);
}
/*
int	main(void)
{
	ft_is_negative(10);
	return (0);
}
*/
