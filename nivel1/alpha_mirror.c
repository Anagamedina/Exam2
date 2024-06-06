/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:28:56 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/04 11:06:27 by anamedin         ###   ########.fr       */
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
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = 219 - argv[1][i]; 
			else if(argv[1][i] >= 'A' argv[1][i] <= 'Z')
				argv[1][i] = 155 - argv[1][i];
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1,"\n", 1);
}
