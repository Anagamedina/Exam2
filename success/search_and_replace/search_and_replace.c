/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:57:52 by anamedin          #+#    #+#             */
/*   Updated: 2024/09/25 10:58:03 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
  int i;

  i = 0;
  if(argc == 4 && !argv[2][1] && !argv[3][1])
  {
	while(argv[1][i] != '\0')
	{
	  if(argv[1][i] == argv[2][0])
      {
	    argv[1][i] = argv[3][0];
      }
      write(1, &argv[1][i], 1);
	  i++;
	}
  }
  write(1, "\n", 1);
}
