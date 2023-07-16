/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayazikoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 01:23:39 by ayazikoz          #+#    #+#             */
/*   Updated: 2023/07/08 01:24:09 by ayazikoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *firstStr, const char *secondStr, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		if (((unsigned char)firstStr[i] != (unsigned char)secondStr[i]
				|| firstStr[i] == 0) || secondStr[i] == 0)
			return ((unsigned char)firstStr[i] - (unsigned char)secondStr[i]);
		i++;
	}
	return (0);
}
