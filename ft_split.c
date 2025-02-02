/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminasya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 09:57:32 by mminasya          #+#    #+#             */
/*   Updated: 2025/02/02 22:43:02 by mminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	size_t	word_count;
	int		i;
	int		in_word;

	i = 0;
	word_count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			word_count++;
			in_word = 1;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (word_count);
}

static int	safe_malloc(char **result, int position, size_t buffer)
{
	int	i;

	i = 0;
	result[position] = malloc(buffer);
	if (NULL == result[position])
	{
		while (i < position)
		{
			free (result[i]);
			i++;
		}
		free (result);
		return (1);
	}
	return (0);
}

static int	fill_memory(char **result, char const *s, char c)
{
	int	len;
	int	j;

	j = 0;
	while (*s)
	{
		len = 0;
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
		{
			len++;
			s++;
		}
		if (len > 0)
		{
			if (safe_malloc(result, j, len + 1))
				return (1);
			ft_strlcpy(result[j], s - len, len + 1);
			j++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**result;

	if (!s)
		return (NULL);
	words = 0;
	words = word_count(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[words] = NULL;
	if (fill_memory(result, s, c))
		return (NULL);
	return (result);
}
/*
	int main()
{
    char *s = "Hello My name is Madlen";
    char **v = ft_split(s, ' ');
    
    if (!v)
    {
        printf("Memory allocation failed.\n");
        return (1);
    }

    int i = 0;
    while (v[i])
    {
        printf("%s\n", v[i]);
        free(v[i]);  // Free each allocated word
        i++;
    }
    free(v);  // Free the array itself
    return 0;
}

*/
