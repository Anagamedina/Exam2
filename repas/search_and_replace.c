/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:19:42 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/25 17:48:37 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	// argv[1] = hello
	// argv[2] = h
	// argv[3] = u
	//
	// argv[1] = hello
	// argv[2] = hi
	// argv[3] = u3
	if(argc == 4 && !argv[2][1] && !argv[3][1])
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];

			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		return(0);
	}
}
