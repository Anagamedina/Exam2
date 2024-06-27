/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:32:27 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/26 14:11:25 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void ft_putchar (char c)
{
	write(1, &c, 1);
}

int is_char_in_str(char c, char *str)
{
	while (*str)
	{
		if(*str == c)
			return(1);
		str++;
	}
	return(0);
}


void inter(char *str1, char *str2)
{
	int i;
	int j;
	char printed[128] = {0};

	i = 0;
	while(str1[i])
	{
		j = 0;
		if(is_char_in_str(str1[i], str2) && !is_char_in_str(str1[i], printed))
		{
			ft_putchar(str1[i]);
			printed[j] = str1[i];
			j++;
		}	
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	ft_putchar('\n');
}
