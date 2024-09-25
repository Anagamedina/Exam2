/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:27:27 by anamedin          #+#    #+#             */
/*   Updated: 2024/09/25 10:31:54 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		write_number(int num)
{
	char str[10] = "0123456789";
	if (num > 9)
		write_number(num / 10);
	write(1, &str[num % 10], 1);
}

int  main(int argc, char ** argv)
{
	(void)argv;
	write_number(argc - 1);
	write(1, "\n", 1);
	return (0);
}
