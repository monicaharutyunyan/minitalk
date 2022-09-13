/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monicaharutyunyan <monicaharutyunyan@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:25:11 by monicaharut       #+#    #+#             */
/*   Updated: 2022/04/20 17:27:34 by monicaharut      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s1);
	if (!s1 && !set)
		return (NULL);
	while (s1[i] && (ft_strchr(set, s1[i]) || s1[i] == ' '))
		i++;
	if (s1[i])
	{
		while (ft_strchr(set, s1[j - 1]) || s1[j - 1] == ' ')
			j--;
	}
	str = ft_substr(s1, i, j - i);
	if (!str)
		return (NULL);
	return (str);
}
