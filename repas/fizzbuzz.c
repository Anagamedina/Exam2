/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:24:46 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/25 13:14:56 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_write_number(int number)
{
	char str[10] = "0123456789";

	if (number > 9)
		ft_write_number(number / 10);
	write(1, &str[number % 10], 1);
}


int main()
{
	int	 i;

	i = 1;
	while(i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizbuzz", 8);
		else if (i % 3  == 0)
			write(1, "fizz", 4);
		else 
			ft_write_number(i);
		i++;
		write(1, "\n", 1);
	}
}
