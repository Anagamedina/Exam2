/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:44:39 by anamedin          #+#    #+#             */
/*   Updated: 2024/09/25 15:55:02 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void write_number(int number)
{
	char digits[10] = "0123456789";
	if (number > 9)
		write_number(number / 10);
	write(1, &digits[number % 10], 1);
}

int main (void)
{
	int i;
	i = 1;
	while (i <= 100)
	{
		if(i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if(i % 3 == 0)
			write(1, "fizz", 4);
		else if(i % 5 == 0)
			write(1, "buzz", 4);
		else
			write_number(i);
		i++;
		write(1, "\n", 1);
	}
	return(0);
}
