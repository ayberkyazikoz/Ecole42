/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayazikoz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:59:07 by ayazikoz          #+#    #+#             */
/*   Updated: 2023/02/11 01:02:58 by ayazikoz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}
