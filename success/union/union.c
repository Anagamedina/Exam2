/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:58:54 by anamedin          #+#    #+#             */
/*   Updated: 2024/09/25 19:21:54 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int char_in_set(char c, char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return(1);
		i++;
	}
	return(0);
}


int main(int argc , char **argv)
{
	int i;
	int j;
	char printed[128] = {0};

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			if (!char_in_set(argv[1][i], printed))
			{
				write(1, &argv[1][i], 1);
				printed[j] = argv[1][i];
				j++;
			}
			i++;
		}
		i = 0;
		while (argv[2][i] != '\0')
		{
			if (!char_in_set(argv[2][i], printed))
			{
				write(1, &argv[2][i], 1);
				printed[j] = argv[2][i];
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
