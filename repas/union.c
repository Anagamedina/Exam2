/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:51:47 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/26 19:08:50 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int char_in_set(char c , char *set)
{
	while(*set)
	{
		if(*set == c)
		set++;
	}
	return(0);
}


void union_str(char *str1, char *str2)
{
	int i;
	int j;

	char printed[128] = {0};
	i = 0;
	if(!char_in_set(str1[i], str2))
	{
		ft_putchar(str1[i]);
		printed[j] = str1[i];
		j++;
	}
	i++;

}





int main(int argc, char **argv)
{
	if(argc == 2)
		union_str(argv[1], argv[2]);
	ft_putchar('\n');
}
