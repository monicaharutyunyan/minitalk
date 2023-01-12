/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharutyu <mharutyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:18:06 by mharutyu          #+#    #+#             */
/*   Updated: 2022/03/21 18:11:12 by mharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	if (!b)
	{
		return (NULL);
	}
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		++i;
	}
	return (b);
}
