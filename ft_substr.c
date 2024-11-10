/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <abmoudni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:24:41 by abmoudni          #+#    #+#             */
/*   Updated: 2024/11/11 00:12:20 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
        char *p;
        size_t i;

        if(!s)
                return NULL;
        i = 0;
        p = malloc(len + 1);
        if(start>=len)
                return ft_strdup("");
        if( p == NULL || len == 0 )
                return NULL;
        while(s[start] && i < len )
        {
                p[i] = s[start];
                i++;
                start++;
        }
        p[i]=('\0');

return p;
}
/*int main()
{

		char *h = "abdessamad";

		printf("%s", ft_substr(h, 0, 5));
}
*/
