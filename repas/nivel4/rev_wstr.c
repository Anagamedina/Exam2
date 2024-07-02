/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:43:59 by anamedin          #+#    #+#             */
/*   Updated: 2024/07/02 16:23:10 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int start;
	int end;
	int i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
			i++; //len del argumento
		while(i > 0)
		{
			while(argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\0')
				i--;
			end = i; 
		while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			i--;
		start = i + 1;
		int flag;
		flag = start;
		while(start <= end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
		if(flag != 0)
			write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}
