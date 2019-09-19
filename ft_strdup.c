/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:35:31 by dshala            #+#    #+#             */
/*   Updated: 2019/09/16 20:24:57 by dshala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *src)
{
	unsigned char			*temp;
	unsigned long			len;
	unsigned long			i;
	unsigned const char		*str;

	str = (unsigned char*)src;
	len = 0;
	while (str[len])
		len++;
	if (!(temp = (unsigned char*)malloc(len + 1)))
		return (NULL);
	i = len;
	len = 0;
	while (len < i)
	{
		temp[len] = str[len];
		len++;
	}
	temp[len] = '\0';
	return ((char*)temp);
}
