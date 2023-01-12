/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monicaharutyunyan <monicaharutyunyan@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:09:54 by monicaharut       #+#    #+#             */
/*   Updated: 2022/04/21 09:50:12 by monicaharut      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*newnode;

	if (lst == NULL)
		return (NULL);
	newnode = lst;
	while (newnode != NULL)
	{
		newnode = newnode->next;
	}
	return (newnode);
}
