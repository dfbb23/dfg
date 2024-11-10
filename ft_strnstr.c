/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:16:42 by abmoudni          #+#    #+#             */
/*   Updated: 2024/10/30 11:16:53 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    if (*little == '\0')
        return (char *)big;

    if (len == 0)
        return NULL;

    i = 0;
    while (big[i] != '\0' && i < len)
    {
        j = 0;
        while (little[j] != '\0' && (i + j) < len && big[i + j] == little[j])
        {
            j++;
        }

        if (little[j] == '\0')
            return (char *)(big + i);

        i++;
    }

    return NULL;
}





/*
int main()
{
char *b = "abdessamad";
char *p = "sa";

printf("%s",ft_strnstr(b,p,8));


}
*/
