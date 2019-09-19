/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:48:50 by dshala            #+#    #+#             */
/*   Updated: 2019/09/16 15:08:37 by dshala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_is_prime(size_t nb)
{
	size_t	i;

	if (nb <= 0 || nb == 1)
		return (0);
	i = 2;
	while (i <= nb)
	{
		if (nb % i == 0 && i == nb)
			return (1);
		else if (nb % i == 0 && i != nb)
			break ;
		i++;
	}
	return (0);
}
