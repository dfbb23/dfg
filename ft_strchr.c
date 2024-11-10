/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:52:13 by abmoudni          #+#    #+#             */
/*   Updated: 2024/10/28 15:52:17 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strchr(const char *s, int c)
{
    char *st = (char *)s;
    while (*st != '\0')
    {
        if (*st == (char)c)
            return st;
        st++;
    }
    if (c == '\0')
        return st;

    return NULL; 
}

/*
int	main(void){

char *f= "abdellah";
printf("%s\n\n",f);
printf("%s",strchr(f,'e'));
}

*/
