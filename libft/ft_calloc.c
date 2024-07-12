/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:01:53 by abakhaev          #+#    #+#             */
/*   Updated: 2023/11/29 10:36:09 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;
	size_t	len;

	if (!nmemb || !size)
		return (malloc(0));
	len = nmemb * size;
	if (len / size != nmemb)
		return (NULL);
	tab = malloc(len);
	if (!tab)
		return (NULL);
	ft_memset(tab, 0, len);
	return (tab);
}
