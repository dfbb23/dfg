/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:53:51 by abmoudni          #+#    #+#             */
/*   Updated: 2024/11/08 16:55:04 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int check(const char *s, char c)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            return (1);
        }
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int star = 0;
    int end;
    int i = 0;
    char *new;

    if (s1 == NULL || set == NULL)
        return (NULL);

    while (s1[star] && check(set, s1[star]))
        star++;

    end = ft_strlen(s1) - 1;
    while (end > star && check(set, s1[end]))
        end--;

    if (star > end)
    {
        new = malloc(1);
        if (!new)
            return (NULL);
        new[0] = '\0';
        return (new);
    }

    new = malloc(end - star + 2);
    if (!new)
        return (NULL);

    while (star <= end)
    {
        new[i] = s1[star];
        i++;
        star++;
    }

    // Null-terminate the result string
    new[i] = '\0';

    return (new);
}
/*
int main()
{
	char *s = "ab abdesamad ab";
	char *c = "ab";

	printf("%s", ft_strtrim(s, c));
}
*/
