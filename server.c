/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monicaharutyunyan <monicaharutyunyan@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:10:20 by monicaharut       #+#    #+#             */
/*   Updated: 2022/09/12 23:43:28 by monicaharut      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	sig_handler(int sig)
{
	static unsigned char	byte = 0;
	static int				shift = 7;

	if (SIGUSR1 == sig)
	{
		byte |= (1 << shift);
		--shift;
	}
	if (SIGUSR2 == sig)
		--shift;
	if (shift < 0)
	{
		ft_putchar_fd(byte, 1);
		if (byte == '\0')
			ft_putchar_fd('\n', 1);
		shift = 7;
		byte = 0;
	}
}

int	main(void)
{
	struct sigaction	s_sigaction;

	ft_putstr_fd("PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	s_sigaction.sa_handler = sig_handler;
	sigemptyset(&s_sigaction.sa_mask);
	s_sigaction.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &s_sigaction, 0);
	sigaction(SIGUSR2, &s_sigaction, 0);
	while (1);
	return (0);
}
