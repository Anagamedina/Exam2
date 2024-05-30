/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:16:39 by anamedin          #+#    #+#             */
/*   Updated: 2024/05/30 13:32:41 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char **str)
{
	int nbr;
	int sig;
	int i;

	nbr = 0;
	sig = 0;
	i = 0;

	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			sig = =1;
		i += 1;
	}
	while (str[i] && str[i] >= '0'&& str[i] <= '9')
		nbr = (nbr * 10) + (str[i++] - '0');
	return( nbr *sig);
}
