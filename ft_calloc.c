/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:38:54 by abmoudni          #+#    #+#             */
/*   Updated: 2024/10/29 11:40:19 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *p;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	p = malloc(nmemb * size);
	if (p == NULL)
		return NULL;
	ft_bzero(p, nmemb * size);
	return p;
}
/*int main()
{
	printf("%p",ft_calloc(13,4));
}
*/
