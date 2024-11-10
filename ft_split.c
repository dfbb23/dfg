/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <abmoudni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 23:29:07 by abmoudni          #+#    #+#             */
/*   Updated: 2024/11/10 23:54:36 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char **free_split(char **result)
{
    int i = 0;
    while (result[i])
    {
        free(result[i]);
        i++;
    }
    free(result);
    return (NULL);
}

static int cw(char *s, char c)
{
    int count = 0;
    int i = 0;

    while (s[i])
    {
        if (s[i] != c && (i == 0 || s[i - 1] == c))
            count++;
        i++;
    }
    return count;
}

static char *copy_word(const char *start, int len)
{
    char *word = malloc((len + 1) * sizeof(char *));
    if (!word)
        return NULL;
    ft_memcpy(word, start, len);

    word[len] = '\0';
    return word;
}
static size_t ft_strlen_d(const char *str, char d)
{
    size_t i;

    i = 0;
    while (str[i] && str[i] != d)
    {
        i++;
    }
    return (i);
}
char **ft_split(char const *s, char c)
{
    char **result;
    int i;

    if (!s)
        return NULL;
    result = malloc((cw((char *)s, c) + 1) * sizeof(char *));
    if (!result)
        return NULL;
    i = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
        {
            result[i] = copy_word(s, ft_strlen_d(s, c));
            if (!result[i])
                return (free_split(result));
            i++;
            s += ft_strlen_d(s, c);
        }
    }
    result[i] = NULL;
    return (result);
}

// int main()
// {
//     char *str = "            .     ";
//     char delimiter = ' ';
//     char **split_result = ft_split(str, delimiter);

//     if (split_result)
//     {
//         int i = 0;
//         while (split_result[i])
//         {
//             printf("Word %d:%s\n", i + 1, split_result[i]);
//             i++;
//         }

//         free_split(split_result);
//     }

//     return 0;
// }
