/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:31:37 by anamedin          #+#    #+#             */
/*   Updated: 2024/07/04 20:38:09 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i;

		i = 0;
		while(argv[1][i])
			i++;
		while(i--)
			write(1, &argv[1][i], 1);
	}
	write(1, "\n", 1);
	return(0);
}
