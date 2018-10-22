/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 17:08:19 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/09/18 17:09:55 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;
	int *tab;

	if (min >= max)
		return (0);
	i = 0;
	size = max - min;
	if ((tab = malloc(sizeof(tab) * size)) == NULL)
		return (0);
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}
