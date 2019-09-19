/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:46:02 by dshala            #+#    #+#             */
/*   Updated: 2019/09/16 20:28:50 by dshala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	if (s1 != NULL && s2 != NULL)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		new = (char*)malloc(sizeof(char) * (len + 1));
		if (!new)
			return (NULL);
		if (len + 1 != 1)
		{
			while (*s1)
				*(new + i++) = *(s1)++;
			while (*s2)
				*(new + i++) = *(s2)++;
		}
		*(new + i) = 0;
		return (new);
	}
	return (NULL);
}
