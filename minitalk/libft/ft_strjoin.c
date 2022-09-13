/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharutyu <mharutyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:26:22 by mharutyu          #+#    #+#             */
/*   Updated: 2022/04/16 13:00:38 by mharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	size_t		i;
	char		*newstr;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	newstr = malloc(sizeof(newstr) * len);
	if (s1 == NULL & s2 == NULL)
		return (NULL);
	while (*s1 != '\0')
		newstr[i++] = *s1++;
	while (*s2 != '\0')
		newstr[i++] = *s2++;
	newstr[i] = '\0';
	return (newstr);
}
