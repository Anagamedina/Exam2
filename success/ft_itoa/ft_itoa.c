/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:31:21 by anamedin          #+#    #+#             */
/*   Updated: 2024/09/25 18:31:23 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int nbr)
{
	if(nbr == -2147483648)
		return("-2147483648\0");
	int n = nbr;
	int len = 0;
	if(nbr <= 0)
		len++;
	while(n)
	{
		n = n / 10;
		len++;
	}
	char *result = (char *)malloc(sizeof(char) * (len + 1));
	if(result  == NULL)
		return (NULL);
	result[len] = '\0';
	if(nbr  == 0)
	{
		result[0] = '0';
		return(result);
	}
	if(nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while(nbr)
	{
		--len;
		result[len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (result);
}
