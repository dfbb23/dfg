/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:52:31 by abmoudni          #+#    #+#             */
/*   Updated: 2024/10/29 12:11:51 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ld;
	size_t	ls;

	if (!dst && size == 0)
		return (ft_strlen(src));

	ld = ft_strlen(dst);
	ls = ft_strlen(src);

	if (size <= ld)
		return (size + ls);

	i = 0;
	while (src[i] != '\0' && (ld + i < size - 1))
	{
		dst[ld + i] = src[i];
		i++;
	}

	dst[ld + i] = '\0';

	return (ld + ls);


}

// int	main(void)
// {
// 	char	*dst = NULL;
// 	char	src[12] = " world !";

// 	printf("%ld", strlcat(dst, src, 10));
// }
