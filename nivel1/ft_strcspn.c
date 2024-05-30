/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:41:49 by anamedin          #+#    #+#             */
/*   Updated: 2024/05/30 15:50:22 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t strcspn(const char *s, const char *charset)
{
	size_t i;
	size_t k;

	i = 0;
	while (s[i] != '\0')
	{
		k = 0;
		while(charset[k] != '\0')
		{
			if (charset[k] == s[i])
				return (i);
			k++;
		}
		i++;
	}
}i
