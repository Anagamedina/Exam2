/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:53:51 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/25 17:11:59 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'y'
					||argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				argv[1][i] +=1;
			else if(argv[1][i]  == 'z' && argv[1][i] == 'Z')
				argv[1][i] -= 25;
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		return(0);
	}
}
