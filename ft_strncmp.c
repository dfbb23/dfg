/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:14:44 by abmoudni          #+#    #+#             */
/*   Updated: 2024/11/08 17:14:49 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;

    while (i < n && s1[i] != '\0' && s2[i] != '\0')
    {
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        i++;
    }

    if (i < n)
        return (unsigned char)s1[i] - (unsigned char)s2[i];
    return 0;
}

/*
int main()
{
char dest[15]="abdezppp";
char src[10]="abdeee";
printf("%d",ft_strncmp(dest,src,8));

}
*/
