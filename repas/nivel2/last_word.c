/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:35:32 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/26 15:00:12 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
			i++;
		i--;
		while (argv[1][i] >= 32)
			i--;
		i++;
		while(argv[1][i] && argv[1][i] != 32 && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
