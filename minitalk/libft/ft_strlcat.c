/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monicaharutyunyan <monicaharutyunyan@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 02:25:31 by monicaharut       #+#    #+#             */
/*   Updated: 2022/04/20 17:20:42 by monicaharut      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (dst[i++])
	{
	}
	j = i - 1;
	while (src[k++])
	{
	}
	if (i > dstsize)
		return (dstsize + k - 1);
	while (*src && j < dstsize - 1)
		dst[j++] = *src++;
	dst[j] = '\0';
	return (i + k - 2);
}
