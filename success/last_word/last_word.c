/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:38:27 by anamedin          #+#    #+#             */
/*   Updated: 2024/09/25 17:55:04 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int start;
	int end;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
			i++;
		while(argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\0')
			i--;
		end = i;
		while (argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			i--;
		}
		start = i + 1;
		while(start <= end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
