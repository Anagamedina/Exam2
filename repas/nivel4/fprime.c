/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:00:15 by anamedin          #+#    #+#             */
/*   Updated: 2024/07/04 18:47:41 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
  int i;
  int number;

  if(argc == 2)
  {
	i = 2;
	number = atoi(argv[1]);
	if(number == 1)
	{
	  printf("1\n");
	  return(0);
	}
	while(i <= number)
	{
	  if(number % i == 0)
	  {
		printf("%d", i);
		number = number / i;
		if(number > 1)
		  printf("*");
		else
		  break;
	  }
	  else
	  {
		i++;
	  }
	}
	printf("\n");
  }
  else
  {
	printf("\n");
  }
  return(0);
}

