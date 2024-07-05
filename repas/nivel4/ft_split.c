/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:53:46 by anamedin          #+#    #+#             */
/*   Updated: 2024/07/05 14:26:14 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


/*static int ft_wordlen(char *str)
{
	int i = 0;
	while(str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		++i;
	return(i);
}

static char *word_dupe(char *str)
{
	int i = 0;
	int len = ft_wordlen(str);
	char *word = malloc(sizeof(char)* (len + 1));
	if(word == NULL)
		return(NULL);


	word[len] = '\0';
	while (i < len)
	{
		word[i] = str[i];
		++i;
	}
	return(word);
}

static void fill_words(char **array, char *str)
{
	int word_index = 0;

	while(*str == ' ' || *str == '\t' || *str == '\n')
		++str;
	while(*str != '\0')
	{
		array[word_index] = word_dupe(str);
		if (array[word_index] == NULL)
				return (NULL);
		++word_index;
		while(*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			++str;
		while(*str == ' ' || *str == '\t' || *str == '\n')
			++str;
	}
}

static int count_words(char *str)
{
	int num_words = 0;
	while(*str == ' ' || *str == '\t' || *str == '\n')
		++str;
	while(*str != '\0')
	{
		++num_words;
		while(*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			++str;
		while(*str  == ' ' || *str == '\t' || *str == '\n')
			++str;
	}
	return(num_words);
}

void ft_free(char **array)
{
	int i = 0;

	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}
char    **ft_split(char *str)
{
	int		num_words;
	char	**array;

	num_words = count_words(str);
	array = malloc(sizeof(char *) * (num_words + 1));
	if(array == NULL)
		return(NULL);

	array[num_words] = 0;
	fill_words(array, str);
	return(array);
}

int main(int argc, char **argv)
{
	char	**split;
	int		i;
	if(argc == 2)
	{
		split = ft_split(argv[1]);
			printf("%s\n", split[0]);
		i = 1;
		while(split[i] != 0)
		{
			printf("%s\n", split[i]);
			i++;
		}
		ft_free(split);
	}
	printf("\n");
	return(0);
}*/

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;

	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;
	
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	
	char **out = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k++], &str[j], i - j);
		}
	}
	out[k] = NULL;
	return (out);
}

