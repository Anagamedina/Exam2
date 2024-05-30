/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 13:15:14 by anamedin          #+#    #+#             */
/*   Updated: 2024/05/28 14:31:26 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
    {
		write(1, &str[i], 1);
        i++;
    }
}




int main ()
{
	char *mensaje = "hola que tal";
	ft_putstr(mensaje);
	return (0);
}


