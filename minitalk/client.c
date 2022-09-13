/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monicaharutyunyan <monicaharutyunyan@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:00:13 by monicaharut       #+#    #+#             */
/*   Updated: 2022/09/12 23:41:36 by monicaharut      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"



void	ft_sending_bytes(char *str, char *argv)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (str[i] == '1')
			kill(ft_atoi(argv), SIGUSR1);
		else
			kill(ft_atoi(argv), SIGUSR2);
		++i;
		usleep(100);
	}
}

static void	ft_error(char *msg)
{
	ft_putendl_fd(msg, 1);
	exit(0);
}

char	*to_bytes(char c)
{
	char	*res;
	int		i;
	int		j;

	i = 128;
	j = 0;
	res = (char *)malloc(sizeof(char *) * 9);
	if (!res)
		ft_error("Allocation error!!!\n");
	while (i > 0)
	{
		if (i & c)
		{
			res[j] = '1';
			++j;
		}
		else
		{
			res[j] = '0';
			++j;
		}
		i >>= 1;
	}
	return (res);
}


int	main(int ac, char **av)
{
	char	*temp;
	int		j;

	j = 0;
	if (ac == 3)
	{
		while (av[2][j])
		{
			temp = to_bytes(av[2][j]);
			ft_sending_bytes(temp, av[1]);
			++j;
		}
	}
	else
	{
		ft_putstr_fd("You must have only two arguments!!!\n", 1);
		exit(0);
	}
	return (0);
}
