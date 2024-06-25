/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 19:07:07 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/25 19:42:03 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <strings.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
	int nb1;
	int nb3;

	nb1 = atoi(argv[1]);
	nb3 = atoi(argv[3]);

	if(argc == 4)
	{
		if(argv[2][0] == '+')
		printf("%d", nb1 + nb3);	

		if(argv[2][0] == '-')
		printf("%d", nb1 - nb3);	

		if(argv[2][0] == '/')
		printf("%d", nb1 / nb3);

		if(argv[2][0] == '*')
		printf("%d", nb1 * nb3);
	}
	write(1, "\n", 1);
	return(0);
}
