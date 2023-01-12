/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monicaharutyunyan <monicaharutyunyan@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:01:17 by monicaharut       #+#    #+#             */
/*   Updated: 2022/09/12 21:46:48 by monicaharut      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <assert.h>
# include "libft/libft.h"

char		*to_bytes(char c);
void		ft_sending_bytes(char *str, char *argv);
char		*to_bytes(char c);

#endif