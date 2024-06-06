/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:53:01 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/04 11:42:59 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc , char **argv)
{
	int nb1;
	int nb1;
	int res;

	nb1 = 0;
	nb2 = 0;
	res = 0;
	if (argc == 4)
	{
		nb1 = atoi(argv[1]);
		nb2 = atoi(argv[3]);
		if (argv[2][0] == '+')
			res = nb1 + nb2;
		else if (argv[2][0] = '-')
			res = nb1 - nb2;
		else if (argv[2][0] = '*')
			res = nb1 * nb2;
		else if (argv[2][0] = '/')
			res = nb1 / nb2;
		else if (argv[2][0] = '%')
			res = nb1 % nb2;
		printf("hello: %d\n", res
	}
	else 
		write (1, "\n", 1);
}
