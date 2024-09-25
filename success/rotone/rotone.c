/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:19:04 by anamedin          #+#    #+#             */
/*   Updated: 2024/09/25 16:25:01 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
				argv[1][i] += 1;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				argv[1][i] += 1;
			else if (argv[1][i] == 'Z')
				argv[1][i] = 'A';
			else if (argv[1][i] == 'z')
				argv[1][i] = 'a';
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
