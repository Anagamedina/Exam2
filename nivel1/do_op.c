/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:53:01 by anamedin          #+#    #+#             */
/*   Updated: 2024/05/30 13:13:36 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int n1;
	int n2;
	int res;

	n1 = 0;
	n2 = 0;
	res = 0;

	if (argc == 4)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);
		if (argv[2][0] == '+')
			res = n1 + n2;
		else if (argv[2][0] == '-')
			res = n1 - n2;
		else if (argv[2][0] == '*')
			res = n1 * n2;
		else if (argv[2][0] == '/')
			res = n1 / n2;
		else if (argv[2][0] == '%')
			res = n1 % n2;
		printf("hello %d\n", res);
	}
	else 
		write(1, "\n", 1);
}
