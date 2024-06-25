/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:42:34 by anamedin          #+#    #+#             */
/*   Updated: 2024/06/25 14:53:33 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void putchar_n(char c, int i)
{
	while(i > 0)
	{
		write(1, &c, 1);
		--i;
	}
}

void repeat_alpha(char *str)
{
	while(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z')
			putchar_n(*str,*str + 1 - 'a');
		else if (*str >= 'A' && *str <= 'Z')
			putchar_n(*str, *str + 1 - 'A');
		else 
			write(1, str, 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1,"\n", 1);
	return(0);
}
