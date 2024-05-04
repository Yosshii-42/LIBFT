/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotsurud <yotsurud@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:23:04 by yotsurud          #+#    #+#             */
/*   Updated: 2024/04/29 13:50:18 by yotsurud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (!haystack && !len)
		return (NULL);
	if (!(*needle))
		return ((char *)haystack);
	n = ft_strlen(needle);
	while (haystack[i] && (i + n) <= len)
	{
		if (haystack[i] == needle[0] && ft_strncmp(&haystack[i], needle, n) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
