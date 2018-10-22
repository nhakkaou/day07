/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 22:33:42 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/09/18 22:35:46 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *ptr;
	int size;

	i = 0;
	ptr = 0;
	if (min >= max)
		return (ptr);
	size = max - min;
	ptr = (int *)(malloc(sizeof(*ptr) * size));
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
