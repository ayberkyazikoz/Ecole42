/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayazikoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 23:32:13 by ayazikoz          #+#    #+#             */
/*   Updated: 2023/07/07 23:33:57 by ayazikoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum( int character )
{
	if ((character >= 'a' && character <= 'z')
		|| (character >= 'A' && character <= 'Z'))
		return (1);
	if (character >= '0' && character <= '9')
		return (1);
	return (0);
}
